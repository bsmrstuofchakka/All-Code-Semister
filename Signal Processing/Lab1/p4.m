clear all;

t1 = -pi:.001:pi;
y1 = cos(t1);
subplot(2,1,1);
plot(t1,y1);
xlabel('t1');
ylabel ('cos(t1)');
title('cos');


t = -pi:.001:pi;
y = cos(t);
subplot(2,1,1);
plot(t,y);
xlabel('t');
ylabel ('sin(t)');
title('sin');

