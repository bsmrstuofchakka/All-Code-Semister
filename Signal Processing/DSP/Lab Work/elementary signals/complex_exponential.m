t=0:.1:10;
a=2;
x=exp((a+3j)*t);
subplot(1,2,1);
plot(t,x);
xlabel('time-->');
ylabel('amplitude-->');
title('Continuous complex exponential');

t=0:.1:10;
a=2;
x=exp((a+3j)*t);
subplot(1,2,2);
stem(t,x);
xlabel('time-->');
ylabel('amplitude-->');
title('Discrete complex exponential');