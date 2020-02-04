% Disctrete complex exponential
t=0:.1:10;
a=2;
x=exp((a+3j)*t);
subplot(1,2,1);
stem(t,x);
xlabel('Time-->');
ylabel('Amplitude-->');
title('Disctrete complex exponential');

% Continuous complex exponential
t=0:.1:10;
a=2;
x=exp((a+3j)*t);
subplot(1,2,2);
plot(t,x);
xlabel('Time-->');
ylabel('Amplitude-->');
title('Continuous complex exponential');