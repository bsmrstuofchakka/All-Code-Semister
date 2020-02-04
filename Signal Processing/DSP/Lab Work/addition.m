n = -10:1:10;
step = [zeros(1,10),ones(1,11)];
figure;
subplot(2,2,1);
stem(n,step);
xlabel('Disctere time n');
ylabel('Amplitude');
title('Unit Step Sequence Discrete');
axis([-10 10 0 1.2]);

t2=-1:0.01:2;
f2=2;
a2=1;
y2=a2*sin(2*pi*f2*t2);
subplot(2,2,2);
stem(t2,y2);
xlabel('Discrete Time Period');
ylabel('Amplitude');
title('Sinusoidal Function');


a= -10:1:10;
addition1 = step + y2;
subplot(2,2,3);
stem(a,addition1);
xlabel('jjk');
ylabel('kknn');
