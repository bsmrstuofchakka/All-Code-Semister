clc;
close all;
clear all;
%x(n)=sin(n)+n
n=0:1:10;
u=sin(n);
x1=u+n;
y1=xcorr(x1);
subplot(2,1,1);
stem(y1);
xlabel('n');
ylabel('y1(n)');
title('Autocorrelation of x(n)=sin(n)+n');

%x(n)=[5 7 8 9];
n=0:1:10;
x2=[5 7 8 9];
y2=xcorr(x2);
subplot(2,1,2);
stem(y2);
xlabel('n');
ylabel('y2(n)');
title('Autocorrelation of x(n)');

