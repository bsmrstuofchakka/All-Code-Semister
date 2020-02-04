% Deconvolution

%output signal
y=[0 1 3 6 8 9 9 8 6 3 1];
ny=0:1:10;
subplot(3,1,1);
stem(ny,y);
xlabel('n');
ylabel('y(n)');
title('Output Signal');

%impulse response
h=[1 1 1 1 1 1];
nh=0:1:5;
subplot(3,1,2);
stem(nh,h);
xlabel('h');
ylabel('h(n)');
title('Impulse Response');


%deconvolution function
x=0:1:(length(y)-(length(h)));
d=deconv(y,h);
subplot(3,1,3);
stem(x,d);
xlabel('x');
ylabel('x(n)');
title('Input Signal');



