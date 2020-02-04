t=0:.001:20;
x=square(2*pi*t);
subplot(2,2,1);
plot(t,x);
axis([-4 4 0 4]);
xlabel('time-->');
ylabel('amplitude-->');
title('Square Wave Continuous');

t=0:.1:20;
x=square(2*pi*t);
subplot(2,2,2);
stem(t,x);
axis([-4 4 0 4]);
xlabel('time-->');
ylabel('amplitude-->');
title('Square Wave Discrete');

t=0:.001:20;
x=square(2*pi*t);
subplot(2,2,3);
plot(t-2,x);
axis([-4 4 0 4]);
xlabel('time-->');
ylabel('amplitude-->');
title('Square Wave Continuous');

t=0:.1:20;
x=square(2*pi*t);
subplot(2,2,4);
stem(t-2,x);
axis([-4 4 0 4]);
xlabel('time-->');
ylabel('amplitude-->');
title('Squae Wave Discrete');