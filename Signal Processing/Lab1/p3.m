

t1 = -pi:.001:pi;
y1 = cos(t1);
subplot (2,1,1);
plot(t1,y1,'r');
xlabel('t1');
ylabel ('cos(t1)');
title('cos');


t = -pi:.001:pi;
y = cos(t);
subplot (2,1,2);
plot(t,y,'g');
xlabel('t');
ylabel ('sin(t)');
title('sin');
grid on;