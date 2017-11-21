

% Assuming all angles to be in radians
% 
function [r,v] = orbit(theta,a,e,i,w,raan)
    
    mu = 3.986004418*10^(14);
    F = [(cos(raan)*cos(w)-sin(raan)*cos(i)*sin(w)) (-cos(raan)*sin(w)-sin(raan)*cos(i)*cos(w)) (sin(raan)*sin(i));
          (sin(raan)*cos(w)+cos(raan)*cos(i)*sin(w)) (-sin(raan)*sin(w)+cos(raan)*cos(i)*cos(w)) (-cos(raan)*sin(i));
          (sin(i)*sin(w)) (sin(i)*cos(w)) (cos(i))];
    r = F * [a*(1-e^2)*cos(theta)/(1+e*cos(theta));a*(1-e^2)*sin(theta)/(1+e*cos(theta));0];
    v = F * [-(mu/(a(1-e^2)))^0.5*sin(theta);(mu/(a(1-e^2)))^0.5*(e+cos(theta));0];
end
