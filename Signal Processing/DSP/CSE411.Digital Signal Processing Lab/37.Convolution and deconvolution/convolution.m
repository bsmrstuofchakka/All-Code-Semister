%Convolution

%input signal
x=[0 1 2 3 2 1];
nx=0:1:5;
subplot(3,1,1);
stem(nx,x);
xlabel('n');
ylabel('x(n)');
title('Input Signal');

%impulse response
h=[1 1 1 1 1 1];
nh=0:1:5;
subplot(3,1,2);
stem(nh,h);
xlabel('h');
ylabel('h(n)');
title('Impulse Response');


%convolution function
%output=[0 1 3 6 8 9 9 8 6 3 1]
n=0:1:(length(x)+(length(h)-2));
c=conv(x,h);
subplot(3,1,3);
stem(n,c);
xlabel('y');
ylabel('y(n)');
title('Output Signal');



