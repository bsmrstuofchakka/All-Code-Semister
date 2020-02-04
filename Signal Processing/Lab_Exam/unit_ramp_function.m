% unit ramp discrete sequence
n=0:1:10;
ramp=n;
subplot(2,2,1);
stem(n,ramp);
xlabel('Discrete time n------>');
ylabel('Amplitude------>');
title('unit ramp discrete sequence');


% unit ramp continuous sequence
n=0:1:10;
ramp=n;
subplot(2,2,2);
plot(n,ramp);
xlabel('Continuous time n------>');
ylabel('Amplitude------>');
title('unit ramp continuous sequence');
