close all;
clear;
m=-10:.01:10;
y=sin(m);
subplot(3,1,1);
plot(m,y);
ylabel('Amplitude');
xlabel('Time');
title('sin wave');

minusy=sin(-m);

even=(y+minusy)/2;
subplot(3,1,2);
plot(m,even);
ylabel('Amplitude');
xlabel('Time');
title('Even part of sin wave');

odd=(y-minusy)/2;
subplot(3,1,3);
plot(m,odd);
ylabel('Amplitude');
xlabel('Time');
title('Odd part of sin wave');