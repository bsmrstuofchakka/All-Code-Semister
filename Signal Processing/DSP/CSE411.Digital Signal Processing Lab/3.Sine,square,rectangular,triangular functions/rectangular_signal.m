% continuous
fs=1000;
t=-1:1/fs:1;
a=rectpuls(t);
subplot(2,1,1);
plot(t,a);
xlabel('Continuous Time Period');
ylabel('Amplitude');
title('Rectangular Signal');
% discrete
fs2=1000;
t2=-1:1/fs2:1;
a2=rectpuls(t2);
subplot(2,1,2);
stem(t,a2);
xlabel('Discrete Time Period');
ylabel('Amplitude');
title('Rectangular Signal');
