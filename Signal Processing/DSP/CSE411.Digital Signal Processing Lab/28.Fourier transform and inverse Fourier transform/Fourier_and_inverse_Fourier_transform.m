
clc;
clear all;
close all;
syms t;
x = exp(-t^2);
disp('Given equation is:');
disp(x);
x1 = fourier(x);
disp('Fourier equation of given equation is:');
disp(x1);
x2 = ifourier(x);
disp('Inverse fourier equation of given signal is:');
disp(x2);
