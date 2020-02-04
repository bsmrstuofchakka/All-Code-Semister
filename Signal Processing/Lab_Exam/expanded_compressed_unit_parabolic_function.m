% unit parabolic expanded discrete sequence
n=0:1:10;
parabola=0.5*(n.^2);
subplot(2,2,1);
stem(n*2,parabola);
xlabel('Discrete time n------>');
ylabel('Amplitude------>');
title('unit parabolic expanded discrete sequence');

% unit parabolic compressed discrete sequence
n=0:1:10;
parabola=0.5*(n.^2);
subplot(2,2,2);
stem(n/2,parabola);
xlabel('Discrete time n------>');
ylabel('Amplitude------>');
title('unit parabolic compressed discrete sequence');


% unit parabolic expanded continuous sequence
n=0:1:10;
parabola2=0.5*(-n.^2);
subplot(2,2,3);
plot(n*2,parabola2);
xlabel('Discrete time n------>');
ylabel('Amplitude------>');
title('unit parabolic continuous sequence');


% unit parabolic compressed continuous sequence
n=0:1:10;
parabola2=0.5*(-n.^2);
subplot(2,2,4);
plot(n/2,parabola2);
xlabel('Discrete time n------>');
ylabel('Amplitude------>');
title('unit parabolic compressed continuous sequence');
