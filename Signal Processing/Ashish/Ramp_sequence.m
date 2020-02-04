close all;
clear;
n=-10:1:10;
for i=1:length(n)
    if(n(i)<0)
        y(i)=0;
    else
        y(i)=n(i);
    end
end
stem(n,y);
xlabel('Time');
ylabel('Amplitude');
title('Ramp discrete sequence');
axis([-15 15 0 15]);
