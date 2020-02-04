clc;
close all;
clear all;


%sin wave

n=-10:1:10;
signal=sin(n);
subplot(2,2,1);
plot(n,signal);

xlabel('Continuous Time n ');
ylabel('Amplitude');
title('Unit Impulse Continuos');


%parabolic continuous sequence

m=-10:1:10;
parabola=.5*(n.^2);
subplot(2,2,2);
plot(n,parabola);
xlabel('Continuous Time m ');
ylabel('Amplitude');
title('Parabola Continuos');


%multiplication of unit parabola and unit impulse

p=m;
addition=parabola.*impulse;
subplot(2,2,3:4);
plot(p,addition);
xlabel('Continuous Time');
ylabel('Amplitude');
title('Multiplication Of Parabola and Impulse ');