%even and odd components os sine function
% continuous sine funtion
%t=-1:0.01:2;
t=0:0.01:2;
f=2;
a=1;
y=a*sin(2*pi*f*t);
subplot(2,2,1);
plot(t,y);
xlabel(' Continuous Time Period');
ylabel('Amplitude');
title('Continuous Time Sine Function');

%reversal of sine function
ry=fliplr(y);
subplot(2,2,2);
plot(t,ry);
xlabel(' Continuous Time Period');
ylabel('Amplitude');
title('Revarsal of Continuous Time Sine Function');

%even component
x_even=0.5*(y+ry);
subplot(2,2,3);
plot(t,x_even);
xlabel(' Continuous Time Period');
ylabel('Amplitude');
title('Even Component of Sine Function');

%odd component
x_odd=0.5*(y-ry);
subplot(2,2,4);
plot(t,x_odd);
xlabel(' Continuous Time Period');
ylabel('Amplitude');
title('Odd Component of Sine Function');
