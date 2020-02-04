t=-1:.1:1;
%a = sin(t);
a=tripuls(t);
subplot(2,1,1);
plot(t,a);
title('Continuous triangular');



t=-1:.1:1;
a=tripuls(t);
subplot(2,1,2);
stem(t,a);
title('Discrete triangular');