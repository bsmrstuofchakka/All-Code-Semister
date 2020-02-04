% Disctrete complex exponential
n=-1:.001:1;
a=2;
cexp=exp((a+3j)*n);
subplot(3,2,1);
stem(n,cexp);
xlabel('Time');
ylabel('Amplitude');
title('Disctrete complex exponential');

% Continuous complex exponential
t=-1:.001:1;
a=2;
cexp=exp((a+3j)*t);
subplot(3,2,2);
plot(t,cexp);
xlabel('Time');
ylabel('Amplitude');
title('Continuous complex exponential');

% discrte triangular function
%f2=100;
%t2=-1:1/f:1;
n=-1:.001:1;
tri=tripuls(n);
subplot(3,2,3);
stem(n,tri);
xlabel('Discrete');
ylabel('Amplitude');
title('Triangular Signal');

% continuous triangular function
%f=100;
%t=-1:1/f:1;
t=-1:.001:1;
tri=tripuls(t);
subplot(3,2,4);
plot(t,tri);
xlabel('Continuous');
ylabel('Amplitude');
title('Triangular Signal');

% addition of complexExponential and trinangular function(discrete time)
for i=1:length(cexp)
    add(i)=cexp(i)*tri(i);
end
subplot(3,2,5);
stem(n,add);
xlabel('Discrete Time');
ylabel('Amplitude');
title('ComplexExponential + Triangular');

% addition of complexExponential and trinangular function(continuous time)
for i=1:length(cexp)
    add(i)=cexp(i)*tri(i);
end
subplot(3,2,6);
plot(t,add);
xlabel('Continuous Time');
ylabel('Amplitude');
title('ComplexExponential + Triangular');