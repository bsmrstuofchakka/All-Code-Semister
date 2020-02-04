f=1000;
t=-1:1/f:1;
a=tripuls(t);
subplot(2,2,1);
plot(t,a);
axis([-5 5 -.5 1]);
title('Continuous triangular');


f=1000;
t=-1:.1:1;
a=tripuls(t);
subplot(2,2,2);
stem(t,a);
axis([-5 5 -.5 1]);
title('Discrete triangular');


f=1000;
t=-1:.1:1;
a=tripuls(t);
subplot(2,2,3);
plot(t-3,a);
axis([-5 5 -.5 1]);
title('Advanced Continuous triangular');


f=1000;
t=-1:.1:1;
a=tripuls(t);
subplot(2,2,4);
stem(t-3,a);
axis([-5 5 -.5 1]);
title('Advanced Discrete triangular');
