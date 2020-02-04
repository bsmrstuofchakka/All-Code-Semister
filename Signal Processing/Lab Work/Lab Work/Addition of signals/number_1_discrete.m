clear all;
clc;
t=-10:.1:10;

for i=1:length(t)
    if t(i)<0
        y(i)=0;
    else if t(i)>=0
         y(i) = 1;
        end
    end
end

subplot(2,2,1);
stem(t,y);
axis([-2 2 -2 2]);
xlabel(' time n-->');
ylabel('Amplitude-->');
title('Unit Step sequence');



s=sin(pi*t);
subplot(2,2,2);
stem(t,s);
xlabel('amplitude');
ylabel('time');
title('sinusoidal');


for i=1:length(y)
    add(i) = y(i) * s(i);
end



subplot(2,2,3:4);
stem(t,add);
axis([-8 8 -2 2]);
xlabel(' time n-->');
ylabel('Amplitude-->');
title('Addition of unit step and sinusoidal function');


