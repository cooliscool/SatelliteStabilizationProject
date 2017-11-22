function [B_int,B_ext] = dmspmag(alt, lat, lon, dyear, varargin)
%  DMSP Magnetic Model.
%   [BX,BY,BZ] = meval(ALT, LAT, LON, DYEAR) calculates the
%   internal magnetic field at a specific location and time using the DMSP 
%   based Magnetic Model. 
%
%   Inputs required are:
%   ALT    :a scalar altitude in kilometers.
%   LAT    :a scalar geocentric latitude in degrees where north latitude is
%          positive, and south latitude is negative.
%   LON    :a scalar geocentric longitude in degrees where east longitude 
%          is positive, west is negative.
%   DYEAR  :a scalar decimal year.  Decimal year is the desired year in 
%          a decimal format to include any fraction of the year that has
%          already passed.
%   EST    :optional argument needed for computing external field (nT)
%   IST    :optional argument needed for computing external field (nT)
%
%   Output calculated for the Earth's magnetic field includes:
%   B_int  :4-vector containing [BX,BY,BZ,F] in units of nT, where BX,BY,BZ
%           are the north,east,down components of the field, and F is
%           the scalar magnitude
%   B_ext  :optional output vector containing [BX,BY,BZ,F] components of
%           external field. 2 additional required inputs [E_st,I_st] in
%           units of nano tesla must be given to compute external field

% initialize model parameters
nmax = 15;
epoch = 2012.0;
Re = 6371.2;

% load model coefficients
c = load_coeffs('dmsp_mag_1.txt');

% Calculate the time difference from the epoch
dt = dyear - epoch;
dt2 = 0.5 * dt * dt;

% after this date, use linear model for gnm
tend = 2013.5;
dt3 = tend - epoch;
dt4 = 0.5 * dt3 * dt3;

% convert to radians
r = alt + Re;
theta = pi/2 - lat*pi/180;
phi = lon * pi / 180;

ct = cos(theta);
st = sin(theta);

for m = 0:nmax
    sp(m+1) = sin(m * phi);
    cp(m+1) = cos(m * phi);
end

ratio = Re/r;
rterm = ratio * ratio;

bx = 0.0; by = 0.0; bz = 0.0;

for n = 1:nmax
    rterm = rterm * ratio;
    p = legendre(n, ct, 'sch');
    dp = legendre_deriv(n, ct);
    for m = 0:n      
        %   Time adjust the Gauss coefficients
        cidx = coeff_idx(n, m);

        if (dyear <= tend)
            gnm = c(cidx,1) + dt*c(cidx,2) + dt2*c(cidx,3);
        else
            gnm = c(cidx,1) + dt3*c(cidx,2) + dt4*c(cidx,3) + (c(cidx,2) + dt3*c(cidx,3)) * (dyear - tend);
        end

        hnm = 0;
        if (m ~= 0)
            cidx = coeff_idx(n, -m);
            
            if (dyear <= tend)
                hnm = c(cidx,1) + dt*c(cidx,2) + dt2*c(cidx,3);
            else
                hnm = c(cidx,1) + dt3*c(cidx,2) + dt4*c(cidx,3) + (c(cidx,2) + dt3*c(cidx,3)) * (dyear - tend);
            end
        end
        
        %    Accumulate terms of the spherical harmonic expansions
        bx = bx + rterm * (gnm*cp(m+1) + hnm*sp(m+1)) * dp(m+1) * (-st);
        by = by + rterm / st * m * (gnm*sp(m+1) - hnm*cp(m+1)) * p(m+1);
        bz = bz - (n+1)*rterm*(gnm*cp(m+1) + hnm*sp(m+1))*p(m+1);
    end
end
    f = sqrt(bx*bx + by*by + bz*bz);
    B_int = [bx by bz f];
    
    % compute external field if needed
    if (nargout > 1)
        if (nargin < 6)
            warning('to compute external field, must call with dmspmag(ALT,LAT,LON,DYEAR,EST,IST)');
        else
            B_ext = dmspmag_ext(alt,lat,lon,dyear,varargin{1},varargin{2});
        end
    end
end

function [B] = dmspmag_ext(alt, lat, lon, dyear, Est, Ist)
    c = load_coeffs('dmsp_mag_1.txt');
    
    % compute unit vector of n = 1 coefficients
    g = c(1:3) / norm(c(1:3));
    dg = zeros(3,1);
    
    B_ext = dmspmag_ext_g(alt,lat,lon,dyear,Est,Ist,g,dg);
    
    g(coeff_idx(1,0)) = 23.6956;
    g(coeff_idx(1,1)) = 1.2411;
    g(coeff_idx(1,-1)) = -3.8961;
    
    dg(coeff_idx(1,0)) = 3.6339;
    dg(coeff_idx(1,1)) = 0.1903;
    dg(coeff_idx(1,-1)) = -0.5975;

    B_rc = dmspmag_ext_g(alt,lat,lon,dyear,1.0,0.0,g,dg);
    
    B = B_ext(1:3) + B_rc(1:3);
    B(4) = norm(B(1:3));
end

function [B] = dmspmag_ext_g(alt, lat, lon, dyear, Est, Ist, g, dg) 
    Re = 6371.2;
    dt = dyear - 2013.0;
        
    % convert to radians
    r = alt + Re;
    theta = pi/2 - lat*pi/180;
    phi = lon * pi / 180;
    
    rterm = (Re / r)^3;
    ct = cos(theta);
    st = sin(theta);
    
    p = legendre(1, ct, 'sch');
    dp = legendre_deriv(1, ct);
    
    bx = 0.0; by = 0.0; bz = 0.0;
    
    for m = 0:1
        cidx = coeff_idx(1, m);
        gnm = g(cidx) + dt*dg(cidx);
        hnm = 0;
        if (m ~= 0)
            cidx = coeff_idx(1, -m);
            hnm = g(cidx) + dt*dg(cidx);
        end
        
        % external contribution
        bx = bx + Est * (gnm * cos(m * phi) + hnm * sin(m * phi)) * dp(m+1) * (-st);
        by = by + Est * m / st * (gnm * sin(m * phi) - hnm * cos(m * phi)) * p(m+1);
        bz = bz + Est * (gnm * cos(m * phi) + hnm * sin(m * phi)) * p(m+1);
        
        % internal contribution
        bx = bx + Ist * rterm * (gnm * cos(m * phi) + hnm * sin(m * phi)) * dp(m+1) * (-st);
        by = by + Ist * rterm * m / st * (gnm * sin(m * phi) - hnm * cos(m * phi)) * p(m+1);
        bz = bz - Ist * 2 * rterm * (gnm * cos(m * phi) + hnm * sin(m * phi)) * p(m+1);
    end
    
    f = sqrt(bx*bx + by*by + bz*bz);
    B = [bx by bz f];
end


function [c] = load_coeffs(filename)
    F = load(filename);
    g = F(:,3);
    dg = F(:,4);
    ddg = F(:,5);
    c = [g dg ddg];
end

function [idx] = coeff_idx(n,m)
    idx = n*n + m + n;
end

% compute Legendre derivatives with finite differences
function [dp] = legendre_deriv(n, x)
    h = 1.0e-8;
    
    pp = legendre(n, x+0.5*h - 0.00000001, 'sch');
    pm = legendre(n, x-0.5*h - 0.00000001, 'sch');
    dp = (pp - pm) / h;
end
