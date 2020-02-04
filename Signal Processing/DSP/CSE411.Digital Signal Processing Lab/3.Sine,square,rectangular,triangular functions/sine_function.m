% continuous sine funtion
%t=-1:0.01:2;
t=0:0.01:2;
f=2;
a=1;
y=a*sin(2*pi*f*t);
subplot(2,1,1);
plot(t,y);
xlabel(' Continuous Time Period');
ylabel('Amplitude');
title('Continuous Time Sine Function');

% discrete sine function
%t1=-1:0.01:2;
t=0:0.01:2;
f=2;
a=1;
y=a*sin(2*pi*f*t);
subplot(2,1,2);
stem(t,y);
xlabel('Discrete Time Period');
ylabel('Amplitude');
title('Discrete Time Sine Function');