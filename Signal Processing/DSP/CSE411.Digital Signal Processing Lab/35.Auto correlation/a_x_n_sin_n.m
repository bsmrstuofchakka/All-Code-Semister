%(a)x(n)=sin(n)

%Auto correlation

%first input signal
n=[1 2 3 4 5 6 7 8];
%x=sin(n);
subplot(3,1,1);
stem(n);
xlabel('n');
ylabel('sin(n)');
title('First Input Signal');

%second input signal
subplot(3,1,2);
stem(n);
xlabel('n');
ylabel('sin(n)');
title('Second Input Signal');


%auto correlation function
a=xcorr(n,n);
subplot(3,1,3);
stem(a);
xlabel('y');
ylabel('y(n)');
title('Output Signal');



