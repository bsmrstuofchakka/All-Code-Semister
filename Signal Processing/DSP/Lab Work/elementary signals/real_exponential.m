n=0:10;
a=3;
x=a.^n;
subplot(1,2,1);
plot(n,x);
xlabel('time-->');
ylabel('amplitude-->');
title(' Continuous real exponential');

n=0:10;
a=3;
x=a.^n;
subplot(1,2,2);
stem(n,x);
xlabel('time-->');
ylabel('amplitude-->');
title(' Discrete real exponential');