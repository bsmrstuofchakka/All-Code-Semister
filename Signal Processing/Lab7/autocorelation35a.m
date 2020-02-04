clc;
clear all;

n=-10:.01:10;
x=sin(n);
subplot(3,3,1);
plot(n,x);
xlabel('Time');
ylabel('Amplitude');
title('Sin Wave');

 count=0;
for m = 0:999
    sum=0;
     for n= -10:10
        sum=sum+sin(n)+sin(n-m);
     end
     fprintf('%d\n',sum);
     gama=sum;
     count=count+1;
      if (gama==0)
            fprintf('The Conditions safies ');
            break;
       end
end