% continuous time cosine funtion
t=-0.05:0.001:0.05;
f=100;
a=5;
y=a*cos(2*pi*f*t);
subplot(3,1,1);
plot(t,y);
xlabel(' Continuous Time Period');
ylabel('Amplitude');
title('Cosine Function');

% discrete time cosine function
n=-0.05:0.001:0.05;
f=100;
a=5;
y=a*cos(2*pi*f*n);
subplot(3,1,2);
stem(n,y);
xlabel('Discrete Time Period');
ylabel('Amplitude');
title('Cosine Function');

% continuous time shifted cosine funtion
t=-0.05:0.001:0.05;
f=100;
a=5;
y=a*cos(2*pi*f*(t-.005));
subplot(3,1,3);
plot(t,y);
xlabel(' Continuous Time Period');
ylabel('Amplitude');
title('Cosine Function');