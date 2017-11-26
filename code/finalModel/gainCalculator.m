Ixx=1800;
Iyy=1600;
Izz=1200;
Ts=500;
overshoot=5/100;
zeta=((-log(overshoot)/pi)^2/(1+(-log(overshoot)/pi)^2))^0.5;

KpX=Ixx*(4.4)^2/(zeta^2*Ts^2)
Kpy=Iyy*(4.4)^2/(zeta^2*Ts^2)
Kpz=Izz*(4.4)^2/(zeta^2*Ts^2)

KpX=1
KpY=1
KpZ=1

KdX=2*4.4/Ts*Ixx
KdY=2*4.4/Ts*Iyy
KdZ=2*4.4/Ts*Izz

KiX=0.5*KdX*KpX/Ixx
KiY=0.5*KdY*KpY/Iyy
KiZ=0.5*KdZ*KpZ/Izz