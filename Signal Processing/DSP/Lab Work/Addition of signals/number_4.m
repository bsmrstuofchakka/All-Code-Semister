f=1000;
t=-10:1/f:10;
a=2;
x=exp((a+3j)*t);
subplot(2,2,1);
plot(t,x);
xlabel('time-->');
ylabel('amplitude-->');
title('Continuous complex exponential');

a=tripuls(t);
subplot(2,2,2);
plot(t,a);
title('Continuous triangular');

for i=1:length(t)
    add(i)=x(i)+a(i);
end

t=-10:1/f:10;

subplot(2,2,3:4);
plot(t,add);
xlabel(' time n-->');
ylabel('Amplitude-->');
title('Addition ot complex exponential and Triangular function');