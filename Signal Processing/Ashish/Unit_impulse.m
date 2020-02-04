close all;
clear;
n=-10:1:10;
for i=1:length(n)
    if n(i)==0
        y(i)=1;
    else
        y(i)=0;
    end
end
stem(n,y);
xlabel('Time');
ylabel('Amplitude');
title('Unit impulse discrete sequence');
axis([-15 15 -1 2]);