n=0:1:10;
parabola = 0.5*(n.^2);
subplot(2,2,1);
stem(n,parabola);
xlabel('Discrete');
ylabel('Amplitude');
title('Parabola');