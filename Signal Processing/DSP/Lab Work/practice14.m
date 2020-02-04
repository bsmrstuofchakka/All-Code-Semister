clear all;
clc;
t= -10:.01:10;
u = .5*sign(t)+0.5;
%u = [zeros(1,10),ones(1,11)];
x = exp(-1.5*t).*u;
subplot(4,1,1);
stem(t,x);

x1= fliplr(x);
subplot(4,1,2);
stem(t,x1);

xe = 0.5 *(x+x1);
subplot(4,1,3);
stem(t,xe);

xo = 0.5*(x-x1);
subplot(4,1,4);
stem(t,xo);
