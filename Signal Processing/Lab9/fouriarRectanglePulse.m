clc;
clear all;
close all;
syms t w ;
% input signaql x(t)
x=2*(heaviside(t+2)-heaviside(t-2));
subplot(3,1,1);
ezplot(x,[-2 2]);
axis([-2.5 2.5 0 2.5]);
% fourier transform
X=int(x*exp(-1i*w*t),t,-5,5);
X=simplify(X);
disp('The fourier transform of x(t) is');
disp(X);
subplot(3,1,2);
ezplot(X);
% magnitude response
Xm=sqrt((real(X).^2)+(imag(X).^2));
subplot(3,1,3);
ezplot(Xm);