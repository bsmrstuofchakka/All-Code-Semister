t=0:.1:10;
a=2;
x=exp((a+3j)*t);
subplot(2,2,1);
plot(t,x);
xlabel('time-->');
ylabel('amplitude-->');
title('Continuous complex exponential');

t=0:.1:10;
a=2;
x=exp((a+3j)*t);
subplot(2,2,2);
stem(t,x);
xlabel('time-->');
ylabel('amplitude-->');
title('Discrete complex exponential');

t=0:.1:10;
a=2;
x=exp((a+3j)*t);
subplot(2,2,3);
plot(t-3,x);
xlabel('time-->');
ylabel('amplitude-->');
title('Advanced Continuous complex exponential');

t=0:.1:10;
a=2;
x=exp((a+3j)*t);
subplot(2,2,4);
stem(t-3,x);
xlabel('time-->');
ylabel('amplitude-->');
title('Advanced Discrete complex exponential');