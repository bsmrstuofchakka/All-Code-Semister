clc;
clear all;
close all;
n=-10:1:10;
for i = 1:length(n)
    if n(i)==0
        y(i)=1;
    else
        y(i)= 0;
    end
end

%impulse=[zeros(1,10),ones(1,1),zeros(1,10)];
subplot(1,2,1);
plot(n,y);
xlabel(' time n-->');
ylabel('Amplitude-->');
title('Unit Impulse sequence');
axis([-10 10 0 1.2]);

n=-10:1:10;
%impulse=[zeros(1,10),ones(1,1),zeros(1,10)];
for i = 1:length(n)
    if n(i)==0
        y(i)=1;
    else
        y(i)= 0;
    end
end
subplot(1,2,2);
stem(n,y);
xlabel(' time n-->');
ylabel('Amplitude-->');
title('Unit Impulse sequence');
axis([-10 10 0 1.2]);