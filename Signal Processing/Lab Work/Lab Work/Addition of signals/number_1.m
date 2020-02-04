clear all;
clc;
t=-10:.01:10;

for i=1:length(t)
    if t(i)<0
        y(i)=0;
    else if t(i)>=0
         y(i) = 1;
        end
    end
end

subplot(2,2,1);
plot(t,y);
xlabel(' time n-->');
ylabel('Amplitude-->');
title('Unit Step sequence');



s=sin(pi*t);
subplot(2,2,2);
plot(t,s);
xlabel('time');
ylabel('Amplitude');
title('sinusoidal');


for i=1:length(y)
    add(i) = y(i) + s(i);
end



subplot(2,2,3:4);
plot(t,add);

xlabel(' time n-->');
ylabel('Amplitude-->');
title('Addition ot unit step and sinusoidal function');