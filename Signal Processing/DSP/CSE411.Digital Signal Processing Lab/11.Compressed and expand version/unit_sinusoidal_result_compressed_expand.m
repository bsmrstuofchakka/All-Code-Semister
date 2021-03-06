
t=-10:.01:10;


for i=1:length(t)
    if t(i)<0
        y(i)=0;
    else if t(i)>=0
            y(i)=1;
        end
    end
end

subplot(3,2,1);
plot(t,y);
axis([-2 2 -2 2]);
xlabel('Time n-->');
ylabel('Amplitude-->');
title('Unit Step Sequence');

s=sin(pi*t);
subplot(3,2,2);
plot(t,s);
xlabel('Time n-->');
ylabel('Amplitude-->');
title('Sinusoidal');


for i=1:length(y);
    add(i)=y(i)+s(i);
end

subplot(3,2,3);
plot(t,add);
axis([-10 10 -2 2]);
xlabel('Time n-->');
ylabel('Amplitude-->');
title('Addition of Unit Step and sinusoidal Sequence');

subplot(3,2,4);
plot(2*t,add);
axis([-20 20 -2 2]);
xlabel('Time n-->');
ylabel('Amplitude-->');
title('Expand of Unit Step and sinusoidal Sequence');

subplot(3,2,5);
plot(t/2,add);
axis([-8 8 -2 2]);
xlabel('Time n-->');
ylabel('Amplitude-->');
title('Compressed of Unit Step and sinusoidal Sequence');
