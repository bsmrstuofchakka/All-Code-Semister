close all;
clear all;

n1=input('Enter the amount to be delayed: ');
n2=input('Enter the amount to be advanced: ');

% Unit Step Function
n=-10:1:10;
L=length(n);
for i=1:L
    if n(i)>=0
        x(i)=1;
    else
        x(i)=0;
    end
end
figure;
subplot(3,2,1);
stem(n,x);
xlabel('Time');
ylabel('Amplitude');
title('Unit Step Function(Discrete)');

m=n+n1;
subplot(3,2,3);
stem(m,x);
xlabel('Time');
ylabel('Amplitude');
title('Unit Step Function(Delayed)');

t=n-n2;
subplot(3,2,5);
stem(t,x);
xlabel('Time');
ylabel('Amplitude');
title('Unit Step Function(Advanced)');

n=-10:.01:10;
L=length(n);
for i=1:L
    if n(i)>=0
        x(i)=1;
    else
        x(i)=0;
    end
end
subplot(3,2,2);
plot(n,x);
xlabel('Time');
ylabel('Amplitude');
title('Unit Step Function(Continuous)');

m=n+n1;
subplot(3,2,4);
plot(m,x);
xlabel('Time');
ylabel('Amplitude');
title('Unit Step Function(Delayed)');

t=n-n2;
subplot(3,2,6);
plot(t,x);
xlabel('Time');
ylabel('Amplitude');
title('Unit Step Function(Advanced)');
figure;

% Unit Ramp Function
n=0:1:10;
ramp=n;
subplot(3,2,1);
stem(n,ramp);
xlabel('Time');
ylabel('Amplitude');
title('Unit Ramp Function');

m=n+n1;
subplot(3,2,3);
stem(m,ramp);
xlabel('Time');
ylabel('Amplitude');
title('Unit Ramp Function(Delayed)');

t=n-n2;
subplot(3,2,5);
stem(t,ramp);
xlabel('Time');
ylabel('Amplitude');
title('Unit Ramp Function(Advanced)');

subplot(3,2,2);
plot(n,ramp);
xlabel('Time');
ylabel('Amplitude');
title('Unit Ramp Function');

m=n+n1;
subplot(3,2,4);
plot(m,ramp);
xlabel('Time');
ylabel('Amplitude');
title('Unit Ramp Function(Delayed)');

t=n-n2;
subplot(3,2,6);
plot(t,ramp);
xlabel('Time');
ylabel('Amplitude');
title('Unit Ramp Function(Advanced)');
figure;

% Unit Parabolic Function 
n=0:1:10;
parabola=0.5*(n.^2);
subplot(3,2,1);
stem(n,parabola);
xlabel('Time');
ylabel('Amplitude');
title('Unit Parabolic Function(Discrete)');

m=n+n1;
subplot(3,2,3);
stem(m,parabola);
xlabel('Time');
ylabel('Amplitude');
title('Unit Parabolic Function(Delayed)');

t=n-n2;
subplot(3,2,5);
stem(t,parabola);
xlabel('Time');
ylabel('Amplitude');
title('Unit Parabolic Function(Advanced)');

t=0:.01:10;
parabola=0.5*(t.^2);
subplot(3,2,2);
plot(t,parabola);
xlabel('Time');
ylabel('Amplitude');
title('Unit Parabolic Function(Continuous)');

m=t+n1;
subplot(3,2,4);
plot(m,parabola);
xlabel('Time');
ylabel('Amplitude');
title('Unit Parabolic Function(Delayed)');

t=t-n2;
subplot(3,2,6);
plot(t,parabola);
xlabel('Time');
ylabel('Amplitude');
title('Unit Parabolic Function(Advanced)');
figure;

% Unit Impulse Function
n=-10:1:10;
%impulse=[zeros(1,10),ones(1,1),zeros(1,10)];
l1 = length(n);
for j = 1:l1
    if(n(j)==0)
        im(j) = 1;
    else
       im(j) = 0; 
    end
        
end
subplot(3,1,1);
stem(n,im);
xlabel('Time');
ylabel('Amplitude');
title('Unit Impulse Function');

m=n+n1;
subplot(3,1,2);
stem(m,im);
xlabel('Time');
ylabel('Amplitude');
title('Unit Impulse Function(Delayed)');

t=n-n2;
subplot(3,1,3);
stem(t,im);
xlabel('Time');
ylabel('Amplitude');
title('Unit Impulse Function(Advanced)');





