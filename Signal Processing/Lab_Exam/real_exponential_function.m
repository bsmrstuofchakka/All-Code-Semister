% Disctrete real exponential
n=0:10;
a=5;
x=a.^n;
subplot(2,2,1);
stem(n,x);
xlabel('Time-->');
ylabel('Amplitude-->');
title('Disctrete real exponential');

% Continuous real exponential
n=0:10;
a=3;
x=a.^n;
subplot(2,2,2);
plot(n,x);
xlabel('Time-->');
ylabel('Amplitude-->');
title('Continuous real exponential');

