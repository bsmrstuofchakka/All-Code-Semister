close all;
clear;
n=-10:1:10;
y=0.5*(n.^2);
stem(n,y,'r');
xlabel('Time');
ylabel('Amplitude');
title('Unit parabolic discrete sequence');
axis([-15 15 0 75]);
