clc; clear all; close all;
% unit impulse continuous sequence
n=-10:1:10;
impulse=[zeros(1,10),ones(1,1),zeros(1,10)];
figure;
subplot(2,2,1);
stem(n,impulse);
xlabel('Discrete time n------->');
ylabel('Amplitude----------->');
title('Unit Impulse Continuous Sequence');
axis([-10 10 0 1.2]);

% unit impulse discrete sequence
n1=-10:1:10;
impulse=[zeros(1,10),ones(1,1),zeros(1,10)];
figure;
subplot(2,2,2);
plot(n1,impulse);
xlabel('Continuous time n------->');
ylabel('Amplitude----------->');
title('Unit Impulse Discrete Sequence');
axis([-10 10 0 1.2]);

