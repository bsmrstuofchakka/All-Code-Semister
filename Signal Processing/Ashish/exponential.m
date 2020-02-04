clc;
close all;
clear;
t=0:.01:10;
f=exp(1i.*(pi./6)./t);
plot(t,real(f),t,imag(f));
legend('Real','Imaginary');
