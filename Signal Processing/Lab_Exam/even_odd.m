close all;
clear all;
n =-1:5;
%actual function

x1 = [2,4,6,7,8,12,14];
subplot(4,1,1);
stem(n,x1);
x2 = fliplr(x1);
subplot(4,1,2);
stem(n,x2);
%EVEN
x3 = .5*(x1+x2);
subplot(4,1,3);
stem(n,x3);
%odd
x4 = .5*(x1-x2);
subplot(4,1,4);
stem(n,x4);