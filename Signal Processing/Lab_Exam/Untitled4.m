% continuous sine funtion
t=-1:0.01:2;
f=2;
a=1;
y=a*sin(2*pi*f*t);
subplot(4,2,1);
plot(t,y);
xlabel(' Continuous Time Period');
ylabel('Amplitude');
title('Sine Function');

% discrete sine function
t2=-1:0.01:2;
f2=2;
a2=1;
y2=a2*sin(2*pi*f2*t2);
subplot(4,2,2);
stem(t2,y2);
xlabel('Discrete Time Period');
ylabel('Amplitude');
title('Sine Function');


% continuous
t1=(0:0.01:5);
x1=square(2*pi*t1);
subplot(4,2,3);
plot(t1,x1);
axis([0 4 0 4]);
xlabel('Continuous Time Period');
ylabel('Amplitude');
title('Continuous Square Function');

% discrete
t2=(0:0.01:5);
x2=square(2*pi*t2);
subplot(4,2,4);
stem(t2,x2);
axis([0 4 0 4]);
xlabel('Discrete Time Period');
ylabel('Amplitude');
title('Discrete Square Function');

% continuous
f=1000;
t=-1:1/f:1;
a=rectpuls(t);
subplot(4,2,5);
plot(t,a);
xlabel('Continuous Time Period');
ylabel('Amplitude');
title('Continuous Rectangular Signal');

% discrete
f=1000;
t2=-1:1/f:1;
a2=rectpuls(t2);
subplot(4,2,6);
stem(t,a2);
xlabel('Discrete Time Period');
ylabel('Amplitude');
title('Discrete Rectangular Signal');

% continuous
f=1000;
t=-1:1/f:1;
a=tripuls(t);
subplot(4,2,7);
plot(t,a);
xlabel('Continuous Time Period');
ylabel('Amplitude');
title('Triangular Signal');
% discrte
f2=1000;
t2=-1:1/f:1;
a2=tripuls(t2);
subplot(4,2,8);
stem(t2,a2);
xlabel('Discrete Time Period');
ylabel('Amplitude');
title('Triangular Signal');

