% expanded Disctrete real exponential
n=0:10;
a=5;
x=a.^n;
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
