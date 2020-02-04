f=1000;
t=-10:1/f:10;
a=2;
x=exp((a+3j)*t);
subplot(3,2,1);
plot(t,x);
xlabel('time-->');
ylabel('amplitude-->');
title('Continuous complex exponential');

a=rectpuls(t);
subplot(3,2,2);
plot(t,a);
title('Continuous triangular');

for i=1:length(a)
    mul(i)=x(i)* a(i);
end
t=-10:1/f:10;
subplot(3,2,3);
plot(t,mul);
xlabel(' time n-->');
ylabel('Amplitude-->');
title('Multiplication of complex exponential and Triangular function');

b=tripuls(t);
subplot(3,2,4);
plot(t,b);
title('Continuous triangular');

for i=1:length(t)
    mul2(i)=mul(i)* b(i);
end
t=-10:1/f:10;
subplot(3,2,5);
plot(t,mul2);
xlabel(' time n-->');
ylabel('Amplitude-->');
title('Multiplication of complex exponential and Triangular function');
