close all;
clear;
clc;
n=-10:1:10;
for i=1:length(n)
    if n(i)<0
        y(i)=0;
    else
        y(i)=1;
    end
end
stem(n,y,'r');
xlabel('Time');
ylabel('Amplitude');
title('Unit step discrete sequence');
axis([-15 15 0 2]);

