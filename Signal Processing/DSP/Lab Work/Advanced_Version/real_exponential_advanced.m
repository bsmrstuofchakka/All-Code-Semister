n=0:10;
a=3;
x=a.^n;
subplot(2,2,1);
plot(n,x);
xlabel('time-->');
ylabel('amplitude-->');
title(' Continuous real exponential');

n=0:10;
a=3;
x=a.^n;
subplot(2,2,2);
stem(n,x);
xlabel('time-->');
ylabel('amplitude-->');
title(' Discrete real exponential');

n=0:10;
a=3;
x=a.^n;
subplot(2,2,3);
plot(n-3,x);
xlabel('time-->');
ylabel('amplitude-->');
title(' Advanced Continuous real exponential');

n=0:10;
a=3;
x=a.^n;
subplot(2,2,4);
stem(n-3,x);
xlabel('time-->');
ylabel('amplitude-->');
title(' Advanced Discrete real exponential');