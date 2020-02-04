close all;
clear;
n=-10:1:10;
impulse=[zeros(1,10),ones(1,1),zeros(1,10)];
subplot(2,2,2);
plot(n,impulse);
ylabel('Amplitude');
xlabel('Time');
title('Impulse');

m=-10:1:10;
parabola=0.5*(n.^2);
subplot(2,2,1);
plot(m,parabola);
ylabel('Amplitude');
xlabel('Time');
title('Parabola');


mul=impulse.*parabola;
subplot(2,2,3:4);
plot(m,mul);
ylabel('Amplitude');
xlabel('Time');
title('Multiplication');
