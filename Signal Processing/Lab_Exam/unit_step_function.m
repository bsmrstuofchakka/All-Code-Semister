% unit step discrete sequence
n=-10:1:10;
step=[zeros(1,10),ones(1,11)];
figure;
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

% unit ramp discrete sequence
n=0:1:10;
ramp=n;
figure;
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


% unit parabolic discrete sequence
n=0:1:10;
parabola=0.5*(n.^2);
figure;
subplot(2,2,1);
stem(n,parabola);
xlabel('Discrete time n------>');
ylabel('Amplitude------>');
title('unit parabolic discrete sequence');


% unit parabolic discrete sequence
n=0:1:10;
parabola2=0.5*(-n.^2);
subplot(2,2,2);
stem(n,parabola2);
xlabel('Discrete time n------>');
ylabel('Amplitude------>');
title('unit parabolic discrete sequence');


% Disctrete real exponential
n=0:10;
a=3;
x=a.^n;
figure;
subplot(2,2,1);
stem(n,x);
xlabel('Time-->');
ylabel('Amplitude-->');
title('Disctrete real exponential');

% Continuous real exponential
n=0:10;
a=3;
x=a.^n;
subplot(2,2,2);
plot(n,x);
xlabel('Time-->');
ylabel('Amplitude-->');
title('Continuous real exponential');


