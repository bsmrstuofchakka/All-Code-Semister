
t = -pi:.001:pi;
y = sin(t);
subplot(2,1,1);
plot(t,y,'r');
xlabel ('t');
title('sin');

t1 = -pi:.001:pi;
y1 = sin(t1);
subplot(2,1,2);
plot(t1,y1);
ylabel ('t1');
title ('sin2');
axis