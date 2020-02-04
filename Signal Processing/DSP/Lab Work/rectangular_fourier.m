clc;
close all;
clear all;
syms t w;
x = 2*(heaviside(t+2) - heaviside(t-2));
subplot(3,1,1);
ezplot(x,[-2,2]);
axis([-2.5,2.5,0,2.5]);
%fourier transform
x1 = int(x*exp(-1i*w*t),t,-5,5);
x1 = simplify(x1);
subplot(3,1,2);
%ezplot(x1);
%axis([-2.5,2.5,0,2.5]);
disp('fourier transfer of X1');
disp(x1);
subplot(3,1,2);
ezplot(x1);

