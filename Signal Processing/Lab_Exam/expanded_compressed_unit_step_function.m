% unit step expanded discrete sequence
n=-10:1:10;
step=[zeros(1,10),ones(1,11)];
figure;
subplot(2,2,1);
stem(2*n,step);
xlabel('Discrete time n------>');
ylabel('Amplitude------>');
title('expanded unit step discrete sequence');
axis([-10 10 0 1.2]);

% unit step compressed discrete sequence
n=-10:1:10;
step=[zeros(1,10),ones(1,11)];
subplot(2,2,2);
stem(n/2,step);
xlabel('Discrete time n------>');
ylabel('Amplitude------>');
title('compressed unit step discrete sequence');
axis([-10 10 0 1.2]);


% unit step expanded continuous sequence
n=-10:1:10;
step=[zeros(1,10),ones(1,11)];
subplot(2,2,3);
plot(2*n,step);
xlabel(' Continuous time n------>');
ylabel('Amplitude------>');
title('expanded unit step discrete sequence');
axis([-10 10 0 1.2]);

% unit step compressed continuous sequence
n=-10:1:10;
step=[zeros(1,10),ones(1,11)];
subplot(2,2,4);
plot(n/2,step);
xlabel('Continuous time n------>');
ylabel('Amplitude------>');
title('compressed unit step discrete sequence');
axis([-10 10 0 1.2]);


% unit expanded ramp discrete sequence
n=0:1:10;
ramp=n;
figure;
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



% unit parabolic expanded discrete sequence
n=0:1:10;
parabola=0.5*(n.^2);
figure;
subplot(2,2,1);
stem(n*2,parabola);
xlabel('Discrete time n------>');
ylabel('Amplitude------>');
title('unit parabolic expanded discrete sequence');

% unit parabolic compressed discrete sequence
n=0:1:10;
parabola=0.5*(n.^2);
subplot(2,2,2);
stem(n/2,parabola);
xlabel('Discrete time n------>');
ylabel('Amplitude------>');
title('unit parabolic compressed discrete sequence');


% unit parabolic expanded continuous sequence
n=0:1:10;
parabola2=0.5*(-n.^2);
subplot(2,2,3);
plot(n*2,parabola2);
xlabel('Discrete time n------>');
ylabel('Amplitude------>');
title('unit parabolic continuous sequence');


% unit parabolic compressed continuous sequence
n=0:1:10;
parabola2=0.5*(-n.^2);
subplot(2,2,4);
plot(n/2,parabola2);
xlabel('Discrete time n------>');
ylabel('Amplitude------>');
title('unit parabolic compressed continuous sequence');



% expanded Disctrete real exponential
n=0:10;
a=5;
x=a.^n;
figure;
subplot(2,2,1);
stem(n*2,x);
xlabel('Time-->');
ylabel('Amplitude-->');
title('expanded Disctrete real exponential');

%compressed Disctrete real exponential
n=0:10;
a=5;
x=a.^n;
subplot(2,2,2);
stem(n/5,x);
xlabel('Time-->');
ylabel('Amplitude-->');
title('Disctrete real exponential');


%expanded Continuous real exponential
n=0:10;
a=3;
x=a.^n;
subplot(2,2,3);
plot(n*5,x);
xlabel('Time-->');
ylabel('Amplitude-->');
title('expanded Continuous real exponential');


%compressed Continuous real exponential
n=0:10;
a=3;
x=a.^n;
subplot(2,2,4);
plot(n/2,x);
xlabel('Time-->');
ylabel('Amplitude-->');
title('compressed Continuous real exponential');
