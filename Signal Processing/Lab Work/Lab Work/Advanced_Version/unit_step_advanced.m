clc;
clear all;
close all;
n=-10:1:10;
step=[zeros(1,10),ones(1,11)];
subplot(2,2,1);
plot(n,step);
xlabel(' time n-->');
ylabel('Amplitude-->');
title('Unit Step sequence1');
axis([-10 10 0 1.2]);



n=-10:1:10;
step=[zeros(1,10),ones(1,11)];
subplot(2,2,2);
plot(n-3,step);
xlabel(' time n-->');
ylabel('Amplitude-->');
title('Advanced Unit Step sequence');
axis([-10 10 0 1.2]);


n=-10:1:10;
step=[zeros(1,10),ones(1,11)];
subplot(2,2,3);
stem(n,step);
xlabel(' time n-->');
ylabel('Amplitude-->');
title('Unit Step sequence3');
axis([-10 10 0 1.2]);

n=-10:1:10;
step=[zeros(1,10),ones(1,11)];
subplot(2,2,4);
stem(n-3,step);
xlabel(' time n-->');
ylabel('Amplitude-->');
title('Unit Step sequence4');
axis([-10 10 0 1.2]);