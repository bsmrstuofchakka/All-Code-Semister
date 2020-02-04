clc;
close all;
clear all;


%sin wave positive continuous sequence

n=-10:.01:10;
evenx=sin(n);
subplot(2,2,1);
plot(n,evenx);
subplot(2,2,1);
xlabel('Continuous Time n ');
ylabel('Amplitude');
title('sin wave positive Continuos');

%sin wave negative continuous sequence

n=-10:.01:10;
eveny=sin(-n);
subplot(2,2,2);
plot(n,eveny);

xlabel('Continuous Time n ');
ylabel('Amplitude');
title('sin wave Negative Continuos');

n=-10:.01:10;
y=(evenx+eveny)/2;
subplot(2,2,3);
plot(n,y);

xlabel('Continuous Time n ');
ylabel('Amplitude');
title('sin wave Even Continuos');

n=-10:.01:10;
y=(evenx-eveny)/2;
subplot(2,2,4);
plot(n,y);

xlabel('Continuous Time n ');
ylabel('Amplitude');
title('sin wave Odd Continuos');