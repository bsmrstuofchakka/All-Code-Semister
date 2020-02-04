%(b)x(n)=[1 2 3 4]

%Auto correlation

%first input signal
n=[1 2 3 4];
subplot(3,1,1);
stem(n);
xlabel('n');
ylabel('x(n)');
title('First Input Signal');

%second input signal
subplot(3,1,2);
stem(n);
xlabel('n');
ylabel('x(n)');
title('Second Input Signal');


%auto correlation function
%y(n)=[4 11 20 30 18 11 4]
a=xcorr(n,n);
subplot(3,1,3);
stem(a);
xlabel('y');
ylabel('y(n)');
title('Output Signal');



