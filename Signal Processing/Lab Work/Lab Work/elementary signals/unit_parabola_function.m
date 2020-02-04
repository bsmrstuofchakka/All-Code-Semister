clc;
clear all;
close all;
n=0:1:10;
parabola=.5*(n.^2);
subplot(1,2,1);
plot(n,parabola);
xlabel(' time n-->');
ylabel('Amplitude-->');
title('Unit Parabola sequence');


n=0:1:10;
parabola=.5*(n.^2);
subplot(1,2,2);
stem(n,parabola);
xlabel(' time n-->');
ylabel('Amplitude-->');
title('Unit Parabola sequence');
