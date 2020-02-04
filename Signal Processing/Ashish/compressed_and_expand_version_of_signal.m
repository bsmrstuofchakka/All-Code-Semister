clc;
clear;
close all;
n=-10:0.01:10;
x=sin(n);
xcom=sin(n./2);
subplot(2,1,1);
plot(n,x);
title('compressed Version');

xexp=sin(2.*n);
subplot(2,1,2);
plot(n,x);
title('Expanded Version');