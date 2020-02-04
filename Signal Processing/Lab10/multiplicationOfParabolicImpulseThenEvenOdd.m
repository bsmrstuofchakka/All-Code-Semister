clear all;
clc;
t=-10:.01:10;
parabola=.5*(t.^2);
subplot(4,4,1:2);
plot(t,parabola);
xlabel(' time n-->');
ylabel('Amplitude-->');
title('Unit Parabola sequence');

parabola2=.5*(-t.^2);
subplot(4,4,3:4);
plot(t,parabola2);
%xlabel(' time n-->');
%ylabel('Amplitude-->');
title('Unit Parabola negative sequence');


for i=1:length(t)
    if t(i)<0
        y(i)=0;
    else if t(i)==0
         y(i) = 1;
        else if t(i)>0
                y(i)=0;
            end
        end
    end
end

subplot(4,4,5:8);
plot(t,y);
xlabel(' time n-->');
ylabel('Amplitude-->');
title('Unit Impulse sequence');


for i=1:length(y)
    mul(i) = parabola(i)*y(i);
end

for i=1:length(y)
    mul2(i) = parabola(i)*y(i);
end


subplot(4,4,9:10);
plot(t,mul);
%xlabel(' time n-->');
%ylabel('Amplitude-->');
title('Mul para and impul positive');

subplot(4,4,11:12);
plot(t,mul2);
%xlabel(' time n-->');
ylabel('Amplitude-->');
title('Mul unit para and impul negative');


even=(mul+mul2)/2;
subplot(4,4,13:14);
plot(t,even);

%xlabel(' for even t ');
ylabel('Amplitude');
title(' Even ');

odd=(mul-mul2)/2;
subplot(4,4,15:16);
plot(t,odd);

xlabel(' for odd t ');
%ylabel('Amplitude');
title(' odd ');
