clear all;
clc;
t= -10:.01:10;
u = .5*sign(t)+0.5;
x = exp(-2*t).*u;
subplot(3,2,1);
stem(t,x);
x1= fliplr(x);
subplot(3,2,2);
stem(t,x1);

%even signal
xe = .5*(x+x1);
subplot(3,2,3);
stem(t,xe);
title('Even signal');
%odd signal
xo = .5*(x-x1);
subplot(3,2,4);
stem(t,xo);
title('Odd signal');
