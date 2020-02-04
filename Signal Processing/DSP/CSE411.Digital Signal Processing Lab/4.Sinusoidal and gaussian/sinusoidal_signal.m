% Continuous sinusoidal signal
t=0:0.01:2;
f=2;
a=1;
sinusoidal=a*sin(2*pi*f*t);
subplot(2,1,1);
plot(t,sinusoidal);
%axis([0 2 -1 1]);
xlabel('Continuous time');
ylabel('Amplitude');
title('Continuous Sinusoidal Signal');

% Discrete sinusoidal signal
n=0:0.01:2;
f=2;
a=1;
sinusoidal=a*sin(2*pi*f*n);
subplot(2,1,2);
stem(n,sinusoidal);
%axis([0 2 -1 1]);
xlabel('Discrete time');
ylabel('Amplitude');
title('Discrete Sinusoidal Signal');