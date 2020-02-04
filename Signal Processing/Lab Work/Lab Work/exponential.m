clear all;
clc;
t =[0:.1:10];
y=exp(i*pi/6./t);
plot(t,real(y),t,imag(y));
legend({'real','imag'});
