% continuous sine funtion delayed version
t=-1:0.01:2;
f=2;
a=1;
y=a*sin(2*pi*f*t);
subplot(8,2,1);
plot(t-3,y);
xlabel(' Continuous Time Period');
ylabel('Amplitude');
title('Sine Function delayed');

% continuous sine funtion advanced version
t=-1:0.01:2;
f=2;
a=1;
y=a*sin(2*pi*f*t);
subplot(8,2,2);
plot(t+3,y);
xlabel(' Continuous Time Period');
ylabel('Amplitude');
title('Sine Function advanced');

% discrete sine function delayed version
t2=-1:0.01:2;
f2=2;
a2=1;
y2=a2*sin(2*pi*f2*t2);
subplot(8,2,3);
stem(t2-3,y2);
xlabel('Discrete Time Period');
ylabel('Amplitude');
title('Sine Function delayed');

% discrete sine function delayed version
t2=-1:0.01:2;
f2=2;
a2=1;
y2=a2*sin(2*pi*f2*t2);
subplot(8,2,4);
stem(t2+3,y2);
xlabel('Discrete Time Period');
ylabel('Amplitude');
title('Sine Function advanced');

% continuous square function delayed
t1=(0:0.01:5);
x1=square(2*pi*t1);
subplot(8,2,5);
plot(t1-3,x1);
axis([0 4 0 4]);
xlabel('Continuous Time Period');
ylabel('Amplitude');
title('Continuous Square Function delayed');

% continuous square function advanced
t1=(0:0.01:5);
x1=square(2*pi*t1);
subplot(8,2,6);
plot(t1+3,x1);
axis([0 4 0 4]);
xlabel('Continuous Time Period');
ylabel('Amplitude');
title('Continuous Square Function advanced');

% discrete square function delayed
t2=(0:0.01:5);
x2=square(2*pi*t2);
subplot(8,2,7);
stem(t2-3,x2);
axis([0 4 0 4]);
xlabel('Discrete Time Period');
ylabel('Amplitude');
title('Discrete Square Function delayed');

% discrete square function advanced
t2=(0:0.01:5);
x2=square(2*pi*t2);
subplot(8,2,8);
stem(t2+3,x2);
axis([0 4 0 4]);
xlabel('Discrete Time Period');
ylabel('Amplitude');
title('Discrete Square Function advanced');

% continuous rectangular signal delayed
f=1000;
t=-1:1/f:1;
a=rectpuls(t);
subplot(8,2,9);
plot(t-3,a);
xlabel('Continuous Time Period');
ylabel('Amplitude');
title('Continuous Rectangular Signal');

% continuous rectangular signal advanced
f=1000;
t=-1:1/f:1;
a=rectpuls(t);
subplot(8,2,10);
plot(t+3,a);
xlabel('Continuous Time Period');
ylabel('Amplitude');
title('Continuous Rectangular Signal advanced');

% discrete rectangular signal delayed
f=1000;
t2=-1:1/f:1;
a2=rectpuls(t2);
subplot(8,2,11);
stem(t-3,a2);
xlabel('Discrete Time Period');
ylabel('Amplitude');
title('Discrete Rectangular Signal delayed');

% discrete rectangular signal advanced
f=1000;
t2=-1:1/f:1;
a2=rectpuls(t2);
subplot(8,2,12);
stem(t+3,a2);
xlabel('Discrete Time Period');
ylabel('Amplitude');
title('Discrete Rectangular Signal advanced');

% continuous triangular signal delayed
f=1000;
t=-1:1/f:1;
a=tripuls(t);
subplot(8,2,13);
plot(t-3,a);
xlabel('Continuous Time Period');
ylabel('Amplitude');
title('Triangular Signal delayed');

% continuous triangular signal advanced
f=1000;
t=-1:1/f:1;
a=tripuls(t);
subplot(8,2,14);
plot(t+3,a);
xlabel('Continuous Time Period');
ylabel('Amplitude');
title('Triangular Signal advanced');

% discrte triangular signal delayed
f2=1000;
t2=-1:1/f2:1;
a2=tripuls(t2);
subplot(8,2,15);
stem(t2-3,a2);
xlabel('Discrete Time Period');
ylabel('Amplitude');
title('Triangular Signal delayed');

% discrte triangular signal advanced
f2=1000;
t2=-1:1/f2:1;
a2=tripuls(t2);
subplot(8,2,16);
stem(t2+3,a2);
xlabel('Discrete Time Period');
ylabel('Amplitude');
title('Triangular Signal advanced');