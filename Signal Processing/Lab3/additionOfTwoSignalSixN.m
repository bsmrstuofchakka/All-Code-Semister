clc;
close all;


%Unit Step Continuous Sequence

n=-10:1:10;
step=[zeros(1,10),ones(1,11)];
% figure;
subplot(3,3,1);
plot(n,step);
xlabel('Continuous time n-->');
ylabel('Amplitude-->');
title('Unit Step Continuous Sequence');
axis([-10 10 0 1.2]);

%Unit Impulse Continuous sequence

n=-10:1:10;
impulse = [zeros(1,10),ones(1,1),zeros(1,10)];
subplot(3,3,2);
plot(n,impulse);
xlabel('Continous n -->');
ylabel('Amplitude -->');
title('Unit Impulse Continuous Sequesce');

axis([-10 10 0 1.2]);


%additon of two signal

y12=impulse+step;
subplot(3,3,3);
plot(n,y12);
xlabel('Continuous time n-->');
ylabel('Amplitude-->');
title('Addition Unit Step and Sinusaidal Continuous Sequence');

%sinusaidal

t=-.05:0.001:.05;
f=100;
a=2;
yt=a*sin(2*pi*f*t);
subplot(3,3,4);
plot(t,yt);
xlabel('Time--> ');
ylabel('Amplitude--> ');
title('Sinusoidal Signal');


%additon of two signal of sinusaidal and others

y12=impulse+yt;
subplot(3,3,5);
plot(n,y12);
xlabel('Continuous time n-->');
ylabel('Amplitude-->');
title('Addition Unit Step and Sinusaidal Continuous Sequence');

