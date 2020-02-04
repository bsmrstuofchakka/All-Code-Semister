clc;
close all;
clear all;

t=-.05:0.001:.05;
f=100;
a=2;
yt=a*sin(2*pi*f*t);
subplot(2,1,1);
plot(t,yt);
xlabel('Time--> ');
ylabel('Amplitude--> ');
title('Sinusoidal Signal');