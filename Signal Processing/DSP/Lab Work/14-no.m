clear all;
clc;
t= -10:.01:10;
u = .5*sign(t)+0.5;
x = exp(-2*t).*u;
subplot(3,1,1);
stem(t,x);

x1= flrpli(x);
subplot(3,1,2);
stem(t,x1);

