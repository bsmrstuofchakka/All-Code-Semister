clc;
close all;
clear all;


%unit impulse continuous sequence

n=-10:1:10;
impulse=[zeros(1,10),ones(1,1),zeros(1,10)];
subplot(2,2,1);
plot(n,impulse);
subplot(2,2,1);
xlabel('Continuous Time n ');
ylabel('Amplitude');
title('Unit Impulse Continuos');
axis([-10 10 0 1.2]);


%parabolic continuous sequence

m=-10:1:10;
parabola=.5*(n.^2);
subplot(2,2,2);
plot(n,parabola);
xlabel('Continuous Time m ');
ylabel('Amplitude');
title('Parabola Continuos');
%axis([-10 10 0 1.2]);


%addition of unit parabola and unit impulse

p=m+n;
addition=parabola+impulse;
subplot(2,2,3:4);
plot(p,addition);
xlabel('Continuous Time');
ylabel('Amplitude');
title('Adition Of Parabola and Impulse ');
%axis([-10 10 0 1.2]);