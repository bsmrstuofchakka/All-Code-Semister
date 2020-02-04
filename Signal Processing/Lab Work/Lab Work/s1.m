clc;
n = -10:1:10;
impulse = [zeros(1,10),ones(1,1),zeros(1,10)];
figure;
subplot(2,2,1);
stem(n,impulse);
xlabel('Disctere time n');
ylabel('Amplitude');
title('Unit Impulse Sequence');
axis([-10 10 0 1.2]);

n = -10:1:10;
impulse = [zeros(1,10),ones(1,1),zeros(1,10)];

subplot(2,2,2);
plot(n,impulse);
xlabel('Disctere time n');
ylabel('Amplitude');
title('Unit Impulse Sequence continuous');
axis([-10 10 0 1.2]);

%step
clc;
n = -10:1:10;
step = [zeros(1,10),ones(1,11)];
figure;
subplot(2,2,1);
stem(n,step);
xlabel('Disctere time n');
ylabel('Amplitude');
title('Unit Step Sequence Discrete');
axis([-10 10 0 1.2]);

n = -10:1:10;
step = [zeros(1,10),ones(1,11)];

subplot(2,2,2);
plot(n,step);
xlabel('Disctere time n');
ylabel('Amplitude');
title('Unit Step Sequence continuous');
axis([-10 10 0 1.2]);
