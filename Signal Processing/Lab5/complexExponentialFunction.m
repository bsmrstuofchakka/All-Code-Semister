clc;
close all;
clear all;

t=0:0.1:10;

f1=exp(1i*pi/6./t);
plot(t,real(f1), t,imag(f1));
legend('real', 'imagii');
