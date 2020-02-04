% Continuous gaussian signal
t=-5:.1:5;
a=.5;
gaussian=exp(-a*t.^2);
subplot(2,1,1);
plot(t,gaussian);
%axis([-5 5 0 2]);
xlabel('Continuous time');
ylabel('Amplitude');
title('Continuous Gaussian Signal');

% Discrete gaussian signal
n=-5:.1:5;
a=.5;
gaussian=exp(-a*n.^2);
subplot(2,1,2);
stem(n,gaussian);
%axis([-5 5 0 2]);
xlabel('Discrete time');
ylabel('Amplitude');
title('Discrete Gaussian Signal');