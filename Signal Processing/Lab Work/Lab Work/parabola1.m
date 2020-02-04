n=-10:1:10;
parabola = 0.5*(n.^2);
subplot(2,2,1);
stem(n,parabola);
xlabel('Discrete');
ylabel('Amplitude');
title('Parabola');

n = -10:1:10;
step = [zeros(1,10),ones(1,11)];
subplot(2,2,2);
stem(n,step);
xlabel('Disctere time n');
ylabel('Amplitude');
title('Unit Step Sequence Discrete');
axis([-10 10 0 1.2]);

n= -10:1:10;
add= parabola * step;
subplot(2,2,3);
stem(n,add);