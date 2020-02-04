f=1000;
t=-1:1/f:1;
a=rectpuls(t);
subplot(2,1,1);
plot(t,a);
title('Continuous rectangular');


f=1000;
t=-1:.1:1;
a=rectpuls(t);
subplot(2,1,2);
stem(t,a);
title('Discrete rectangular');