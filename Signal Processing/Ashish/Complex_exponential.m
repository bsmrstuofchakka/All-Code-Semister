close all;
clear;
t=0:0.1:10;
f=exp(1j.*(pi./6)./t);
plot(t,real(f),t,imag(f));
legend('Real','Imaginary');
axis([-1 15 -1 1.5]);