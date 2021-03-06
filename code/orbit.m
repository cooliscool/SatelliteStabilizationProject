
clear;clc;
% Assuming all angles to be in radians
% Sun synchronous orbits (SSO) are walking orbits whose orbital plane precesses
% with the same period as the planet's solar orbit period. 
Re = 6371000; 
apogee = Re + 738000;
perigee = Re + 716000;
a = (apogee + perigee )/2;
e = apogee/a - 1;
i = 98.28*pi/180;

for theta = 0:1:360
    [rr,vv] = sunsyn(theta*pi/180,a,e,i,0,0);
    %plot(theta, norm(rr) ,'.')
    hold on 
    longtitude = acos(rr(1)/(rr(1)^2 + rr(2)^2) );
    latitude = acos(rr(3)/norm(rr));
    altitude = norm(rr)- Re; 
    mag_field = dmspmag(altitude/1000,latitude*180/pi,longtitude*180/pi, 2000, 0);
    plot(theta, mag_field, '.');
end


function [r,v] = sunsyn(theta,a,e,i,w,raan)
    
    mu = 3.986004418*10^(14);
    F = [(cos(raan)*cos(w)-sin(raan)*cos(i)*sin(w)) (-cos(raan)*sin(w)-sin(raan)*cos(i)*cos(w)) (sin(raan)*sin(i));
          (sin(raan)*cos(w)+cos(raan)*cos(i)*sin(w)) (-sin(raan)*sin(w)+cos(raan)*cos(i)*cos(w)) (-cos(raan)*sin(i));
          (sin(i)*sin(w)) (sin(i)*cos(w)) (cos(i))];
    r = F * [a*(1-e^2)*cos(theta)/(1+e*cos(theta));a*(1-e^2)*sin(theta)/(1+e*cos(theta));0];
    v = F * [-((mu/(a*(1-e^2)))^0.5)*sin(theta);((mu/(a*(1-e^2)))^0.5)*(e+cos(theta));0];
end
