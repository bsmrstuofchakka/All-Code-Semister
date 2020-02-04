clear all;
%unit step function
n1 = input('Enter the amount of advanced time: ');
n2 = input('Enter the amount of delayed time: ');
i = -10:1:10;
l = length(i);
for j=1:l
    if(i(j)>=0)
        y(j) = 1;
    else
        y(j) = 0;
    end
end
subplot(3,1,1);
plot(i,y);

m = i+n2;
subplot(3,1,2);
plot(m,y);
