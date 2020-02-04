% continuous
t=(0:0.01:20);
x=square(2*pi*t);
subplot(2,2,1);
plot(t,x);
axis([0 4 0 4]);
xlabel('Continuous Time Period');
ylabel('Amplitude');
title('Square Function');
% discrete
t2=(0:0.01:20);
x2=square(2*pi*t2);
subplot(2,1,2);
stem(t2,x2);
axis([0 4 0 4]);
xlabel('Discrete Time Period');
ylabel('Amplitude');
title('Square Function');
