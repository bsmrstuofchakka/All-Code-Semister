%Cross correlation

%first input signal
x=[1 2 3 4];
%nx=0:1:5;
subplot(3,1,1);
stem(x);
xlabel('n');
ylabel('x(n)');
title('First Input Signal');

%second input signal
h=[4 3 2 1];
%nh=0:1:5;
subplot(3,1,2);
stem(h);
xlabel('h');
ylabel('h(n)');
title('Second Input Signal');


%cross correlation function
%ouput=[1 4 10 20 25 24 16]
%n=0:1:(length(x)+(length(h)-2));
c=xcorr(x,h);
subplot(3,1,3);
stem(c);
xlabel('y');
ylabel('y(n)');
title('Output Signal');



