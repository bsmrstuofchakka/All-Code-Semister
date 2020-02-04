t=0:.001:20;
x=square(2*pi*t);
subplot(2,1,1);
plot(t,x);
xlabel('time-->');
ylabel('amplitude-->');
title('Square Wave Continuous');

t=0:.1:20;
x=square(2*pi*t);
subplot(2,1,2);
stem(t,x);
axis([0 4 0 4]);
xlabel('time-->');
ylabel('amplitude-->');
title('Square Wave Discrete');