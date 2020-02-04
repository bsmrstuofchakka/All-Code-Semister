% Disctrete real exponential
n=-1:0.001:1;
a=2;
rexp=a.^n;
subplot(2,3,1);
stem(n,rexp);
xlabel('Time-->');
ylabel('Amplitude-->');
title('Disctrete real exponential');


% discrete rectangular function
%fs2=1000;
%t2=-1:1/fs2:1;
n=-1:0.001:1;
rect=rectpuls(n);
subplot(2,3,2);
stem(n,rect);
xlabel('Discrete Time');
ylabel('Amlitude');
title('Rectangular function');

%Addition of realExponential and ractangular function(discrete time)
for i=1:length(rexp)
    add(i)=rexp(i)+rect(i);
end
subplot(2,3,3);
stem(n,add);
xlabel('Discrete Time');
ylabel('Amlitude');
title('RealExponential + Rectangular');


% Continuous real exponential
t=-1:0.001:1;
a=2;
rexp=a.^t;
subplot(2,3,4);
plot(t,rexp);
xlabel('Continuous Time');
ylabel('Amlitude');
title('RealExponential Function');


% continuous rectangular function
%fs=1000;
%t=-1:1/fs:1;
t=-1:0.001:1;
rect=rectpuls(t);
subplot(2,3,5);
plot(t,rect);
xlabel('Continuous Time');
ylabel('Amplitude');
title('Rectangular Signal');

%Addition of realExponential and ractangular function(continous time)
for i=1:length(rexp)
    add(i)=rexp(i)+rect(i);
end
subplot(2,3,6);
plot(t,add);
xlabel('Discrete Time');
ylabel('Amlitude');
title('RealExponential + Rectangular');
