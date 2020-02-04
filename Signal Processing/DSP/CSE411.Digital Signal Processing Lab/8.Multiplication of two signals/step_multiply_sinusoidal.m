% unit step discrete sequence
n=-10:.01:10;
for i=1:length(n)
    if n(i)<0
        u(i)=0;
    else if n(i)>=0
          u(i)=1;
        end
    end
end   
subplot(2,3,1);
stem(n,u);
xlabel('Discrete time');
ylabel('Amplitude');
title('Unit Step Sequence');
axis([-10 10 0 1.2]);

% discrete sinusoidal function
%t1=-1:0.01:2;
f=2;
a=1;
s=a*sin(2*pi*f*n);
subplot(2,3,2);
stem(n,s);
xlabel('Discrete Time');
ylabel('Amplitude');
title('Sine Function');


%addition of unit step and sinusoidal function(discrete time)

for i=1:length(u)
    add(i)=u(i)*s(i);
end
subplot(2,3,3);
stem(n,add);
xlabel('Discrete Time');
ylabel('Amplitude');
title('Unit Step + Sinusoidal');

% unit step continuous sequence
t=-10:.01:10;
for i=1:length(t)
    if t(i)<0
        u(i)=0;
    else if t(i)>=0
            u(i)=1;
        end
    end
end
subplot(2,3,4);
plot(t,u);
xlabel('Continuous time');
ylabel('Amplitude');
title('Unit Step Sequence');
axis([-10 10 0 1.2]);


% continuous sine funtion
%t=-1:0.01:2;
f=2;
a=1;
s=a*sin(2*pi*f*t);
subplot(2,3,5);
plot(t,s);
xlabel('Continuous Time Period');
ylabel('Amplitude');
title('Sine Function');

%addition of unit step and sinusoidal function(continuous time)

for i=1:length(u)
    add(i)=u(i)*s(i);
end
subplot(2,3,6);
plot(t,add);
xlabel('Continous Time');
ylabel('Amplitude');
title('Unit Step + Sinusoidal');


