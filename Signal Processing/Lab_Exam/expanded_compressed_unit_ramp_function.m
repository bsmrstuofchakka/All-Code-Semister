% unit expanded ramp discrete sequence
n=0:1:10;
ramp=n;
subplot(2,2,1);
stem(n*2,ramp);
xlabel('Discrete time n------>');
ylabel('Amplitude------>');
title('unit ramp expanded discrete sequence');

% unit ramp compressed discrete sequence
n=0:1:10;
ramp=n;
subplot(2,2,2);
stem(n/2,ramp);
xlabel('Discrete time n------>');
ylabel('Amplitude------>');
title('unit ramp compressed discrete sequence');


% unit ramp expanded continuous sequence
n=0:1:10;
ramp=n;
subplot(2,2,3);
plot(n*2,ramp);
xlabel('Continuous time n------>');
ylabel('Amplitude------>');
title('unit ramp expanded continuous sequence');

% unit ramp compressed continuous sequence
n=0:1:10;
ramp=n;
subplot(2,2,4);
plot(n/2,ramp);
xlabel('Continuous time n------>');
ylabel('Amplitude------>');
title('unit ramp compressed continuous sequence');
