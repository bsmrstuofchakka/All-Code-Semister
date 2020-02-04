clc;
close all;
clear all;


%Unit Impulse Descrete sequence

n=-10:1:10;
impulse = [zeros(1,10),ones(1,1),zeros(1,10)];
subplot(3,3,1);
stem(n,impulse);
xlabel('Discrete time n -->');
ylabel('Amplitude -->');
title('Unit Impulse Descrete Sequesce');

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





%Unit Step Descrete Sequence

n=-10:1:10;
step=[zeros(1,10),ones(1,11)];
% figure;
subplot(3,3,3);
stem(n,step);
xlabel('Discrete time n-->');
ylabel('Amplitude-->');
title('Unit Step Descrete Sequence');
axis([-10 10 0 1.2]);


%Unit Step Continuous Sequence

n=-10:1:10;
step=[zeros(1,10),ones(1,11)];
% figure;
subplot(3,3,4);
plot(n,step);
xlabel('Continuous time n-->');
ylabel('Amplitude-->');
title('Unit Step Continuous Sequence');
axis([-10 10 0 1.2]);


%Unit Ramp Descrete Sequence

n=0:1:10;
ramp=n;
subplot(3,3,5);
stem(n,ramp);
xlabel('Discrete time n -->');
ylabel('Amplitude-->');
title('Unit Ramp Descrete Sequence');

%Unit Ramp Continuous Sequence

n=0:1:10;
ramp=n;
subplot(3,3,6);
plot(n,ramp);
xlabel('Continuous time n -->');
ylabel('Amplitude-->');
title('Unit Ramp Continuous Sequence');

%Unit Parabola Descrete Sequence

n= 0:1:10;
parabola= 0.5*(n.^2);
subplot(3,3,7);
stem(n,parabola);
xlabel('Discrete Time n -->');
ylabel('Amplitude -->');
title('Unit Parabolic Descrete Sequence');


%Unit Parabola Continuous Sequence

n= 0:1:10;
parabola= 0.5*(n.^2);
subplot(3,3,8);
plot(n,parabola);
xlabel('Continuous Time n -->');
ylabel('Amplitude -->');
title('Unit Parabolic Continuous Sequence');