close all;
clear all;
t = -10:.01:10;
%actual function
u = .5*sign(t)+.5;
x1 = exp(-.5*t).*u;
subplot(4,1,1);
stem(t,x1);
x2 = fliplr(x1);
subplot(4,1,2);
stem(t,x2);
%EVEN
x3 = .5*(x1+x2);
subplot(4,1,3);
stem(t,x3);
%odd
x4 = .5*(x1-x2);
subplot(4,1,4);
stem(t,x4);