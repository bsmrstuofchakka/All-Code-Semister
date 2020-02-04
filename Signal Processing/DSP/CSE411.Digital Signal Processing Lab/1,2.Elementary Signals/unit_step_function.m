% unit step discrete sequence
n=-10:1:10;
step=[zeros(1,10),ones(1,11)];
subplot(2,2,1);
stem(n,step);
xlabel('Discrete time n------>');
ylabel('Amplitude------>');
title('unit step discrete sequence');
axis([-10 10 0 1.2]);

% unit step continuous sequence
n=-10:1:10;
step=[zeros(1,10),ones(1,11)];
subplot(2,2,2);
plot(n,step);
xlabel('Continuous time n------>');
ylabel('Amplitude------>');
title('unit step discrete sequence');
axis([-10 10 0 1.2]);