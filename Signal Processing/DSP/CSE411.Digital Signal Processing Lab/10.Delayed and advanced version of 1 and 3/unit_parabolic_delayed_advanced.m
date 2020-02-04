% unit step continuous sequence
t=-10:1:10;
step=[zeros(1,10),ones(1,11)];
subplot(3,2,1);
plot(t,step);
xlabel('Continuous time n------>');
ylabel('Amplitude------>');
title('unit step continuous sequence');
axis([-10 10 0 1.2]);

% delayed unit step continuous sequence
t=-10:1:10;
step=[zeros(1,10),ones(1,11)];
subplot(3,2,3);
plot(t-3,step);
xlabel('Continuous time n------>');
ylabel('Amplitude------>');
title('Advanced');
axis([-10 10 0 1.2]);

% advanced unit step continuous sequence
t=-10:1:10;
step=[zeros(1,10),ones(1,11)];
subplot(3,2,5);
plot(t+3,step);
xlabel('Continuous time n------>');
ylabel('Amplitude------>');
title('Delayed');
axis([-10 10 0 1.2]);

% unit step discrete sequence
n=-10:1:10;
step=[zeros(1,10),ones(1,11)];
subplot(3,2,2);
stem(n,step);
xlabel('Discrete time n------>');
ylabel('Amplitude------>');
title('unit step discrete sequence');
axis([-10 10 0 1.2]);

% delayed unit step discrete sequence
n=-10:1:10;
step=[zeros(1,10),ones(1,11)];
subplot(3,2,4);
stem(n-3,step);
xlabel('Discrete time n------>');
ylabel('Amplitude------>');
title('Advanced');
axis([-10 10 0 1.2]);

% advanced unit step discrte sequence
n=-10:1:10;
step=[zeros(1,10),ones(1,11)];
subplot(3,2,6);
stem(n+3,step);
xlabel('Discrete time----->');
title('Delayed');
axis([-10 10 0 1.2]);