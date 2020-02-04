t=-1:.01:1;
f=2;
a=1;
y=a*cos(2*pi*f*t);
subplot(2,1,1);
plot(t,y);
xlabel('amplitude');
ylabel('time');
title('Continuous sinusoidal');

t=-1:.1:1;
f=2;
a=1;
y=a*cos(2*pi*f*t);
subplot(2,1,2);
stem(t,y);
xlabel('amplitude');
ylabel('time');
title('Discrete sinusoidal');