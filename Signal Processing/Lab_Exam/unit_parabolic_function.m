% unit parabolic discrete sequence
n=0:1:10;
parabola=0.5*(n.^2);
subplot(2,2,1);
stem(n,parabola);
xlabel('Discrete time n------>');
ylabel('Amplitude------>');
title('unit parabolic discrete sequence');


% unit parabolic discrete sequence
n=0:1:10;
parabola2=0.5*(-n.^2);
subplot(2,2,2);
stem(n,parabola2);
xlabel('Discrete time n------>');
ylabel('Amplitude------>');
title('unit parabolic discrete sequence');
