clc;
clear all;
close all;
n=0:1:10;
ramp=n;
subplot(2,2,1);
plot(n,ramp);
xlabel(' time n-->');
ylabel('Amplitude-->');
title('Unit Ramp sequence');


n=0:1:10;
ramp=n;
subplot(2,2,2);
stem(n,ramp);
xlabel(' time n-->');
ylabel('Amplitude-->');
title('Unit Ramp sequence');

n=0:1:10;
ramp=n;
subplot(2,2,3);
plot(n-3,ramp);
xlabel(' time n-->');
ylabel('Amplitude-->');
title('Unit Ramp sequence');


n=0:1:10;
ramp=n;
subplot(2,2,4);
stem(n-3,ramp);
xlabel(' time n-->');
ylabel('Amplitude-->');
title('Unit Ramp sequence');