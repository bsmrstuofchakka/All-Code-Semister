t=-360:1:360;
a = sin(t);
a=tripuls(a);
subplot(2,1,1);
plot(t,a);
title('Continuous triangular');


f=1000;
t=-1:.1:1;
a=tripuls(t);
subplot(2,1,2);
stem(t,a);
title('Discrete triangular');