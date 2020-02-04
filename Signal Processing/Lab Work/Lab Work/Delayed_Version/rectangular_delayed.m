f=1000;
t=-1:1/f:1;
a=rectpuls(t);
subplot(2,2,1);
plot(t,a);
axis([-5 5 -.5 1.5]);
title('Continuous rectangular');


f=1000;
t=-1:.1:1;
a=rectpuls(t);
subplot(2,2,2);
stem(t,a);
axis([-5 5 -.5 1.5]);
title('Discrete rectangular');

f=1000;
t=-1:1/f:1;
a=rectpuls(t);
subplot(2,2,3);
plot(t+3,a);
axis([-5 5 -.5 1.5]);
title('Delayed Continuous rectangular');


f=1000;
t=-1:0.1:1;
a=rectpuls(t);
subplot(2,2,4);
stem(t+3,a);
axis([-5 5 -.5 1.5]);
title('Delayed Discrete rectangular');