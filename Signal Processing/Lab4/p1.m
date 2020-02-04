clc;
clear all;
close all;

n=0:100;
a=pi/2/100;
b=0;
arg = a*n.*n+b*n;
x=cos(arg);
plot(n,x);
xlabel('Discrete Time');
ylabel('Amplitude');
title('Swept-freequency sinusoidal Signal');
