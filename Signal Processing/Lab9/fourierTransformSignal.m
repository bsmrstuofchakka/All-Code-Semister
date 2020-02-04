clc;
clear all;
close all;
syms t w ;
% input signaql x(t)
x=exp(-2*t).*heaviside(t);
subplot(3,1,1);
ezplot(x);
title('input signal');
% fourier transform
disp('The fourier transform of x(t) is');
X=fourier(x);
X=simplify(X);
% frequency response
subplot(3,1,2);
ezplot(abs(X));
% magnitude response
title('Magnitude response of Fourier Transform');
Xm=sqrt((real(X).^2)+(imag(X).^2));
subplot(3,1,3);
ezplot(atan((imag(X))/(real(X))));
title('Phase response of Fourier Transform');