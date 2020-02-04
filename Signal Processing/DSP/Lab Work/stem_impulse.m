n = -10:1:10;
impulse = [zeros(1,10),ones(1,1),zeros(1,10)];
subplot(2,2,1);
plot(n,impulse);
xlabel('Disctere time n');
ylabel('Amplitude');
title('Unit Impulse Sequence');
axis([-10 10 0 1.2]);

n = -10:1:10;
step = [zeros(1,10),ones(1,11)];
subplot(2,2,2);
plot(n,step);
xlabel('Disctere time n');
ylabel('Amplitude');
title('Unit Step Sequence Discrete');
axis([-10 10 0 1.2]);

n= -10:1:10;
add = impulse + step;
subplot(2,2,3);
plot(n,add);

