
t=-10:0.01:10;

%Given signal x(t)
u1=sin(t);
u2=cos(t);
x1=u1+u2;
subplot(2,2,1);
plot(t,x1);
title('Given signal x(t)');

%time reversed signal x(-t)
x2=fliplr(x1);
subplot(2,2,2);
plot(t,x2);
title('Given signal x(-t)');

%Even component xe(t)
xe=.5*(x1+x2);
subplot(2,2,3);
plot(t,xe);
title('Even component xe(t)');

%Odd component xo(t)
xo=.5*(x1-x2);
subplot(2,2,4);
plot(t,xo);
title('Odd component xo(t)');




