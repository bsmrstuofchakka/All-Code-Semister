% unit impulse discrete sequence
n=-10:1:10;
impulse=[zeros(1,10),ones(1,1),zeros(1,10)];
subplot(2,2,1);
stem(n,impulse);
xlabel('Discrete time n------>');
ylabel('Amplitude------>');
title('unit impulse discrete sequence');
axis([-10 10 0 1.2]);

% unit impulse continuous sequence
n=-10:1:10;
impulse=[zeros(1,10),ones(1,1),zeros(1,10)];
subplot(2,2,2);
plot(n,impulse);
xlabel('Continuous time n------>');
ylabel('Amplitude------>');
title('unit impulse discrete sequence');
axis([-10 10 0 1.2]);