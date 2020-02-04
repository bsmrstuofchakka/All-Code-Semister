t=-1:0.01:2;
f=2;
a=1;
y=a*sin(2*pi*f*t);
subplot(2,1,1);
plot(t,y);
xlabel('Continuous Time Period');
ylabel('Amplitude');
title('sine function');

t2=-1:0.01:2;
f2=2;
a2=1;
y2=a2*sin(2*pi*f2*t2);
subplot(2,1,2);
stem(t2,y2);
xlabel('Discrete Time Period');
ylabel('Amplitude');
title('Sine Function');