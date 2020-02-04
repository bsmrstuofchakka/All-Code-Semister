clc;
close all;
clear all;

n=-10:1:10;
step=[zeros(1,10),ones(1,11)];

plot(n,step);
xlabel('Continuous Time: ');
ylabel('Amplitude: ');
title('Unit Continuous Time Signal');
axis([-10 10 0 1.2]);