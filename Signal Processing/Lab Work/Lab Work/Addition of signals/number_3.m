f=1000;
n=-10:.1/f:10;
a=3;
x=a.^n;
subplot(2,2,1);
plot(n,x);
xlabel('time-->');
ylabel('amplitude-->');
title(' Continuous real exponential');

y=rectpuls(n);
subplot(2,2,2);
plot(n,y);
title('Continuous rectangular');

for i=1:length(x)
    add(i)=x(i)+y(i);
end
subplot(2,2,3:4);
plot(n,add);
axis([-4 4 -2 2]);
xlabel(' time n-->');
ylabel('Amplitude-->');
title('Addition ot real exponential and rectangular function');