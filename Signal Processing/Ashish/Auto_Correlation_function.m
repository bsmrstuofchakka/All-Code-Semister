clear;
close all;
n=-5:.01:5;
x=sin(n);
subplot(2,2,1:2);
plot(n,x);
xlabel('Time');
ylabel('Amplitude');
title('Given signal');

gama=999;
for m=0:999
    count=0;
    for k=-5:5
        count=count+sin(k)*sin(k-m);
    end
    gama=count;
    fprintf('%d\n',gama);
    if(gama==0)
        break;
    end
end