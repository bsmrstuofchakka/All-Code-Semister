clear;
close all;
clc;
x=input('Enter a signal sequence:');
y=input('Enter another signal sequence:');
gama=999;
for m=1:length(x)+1
    count=0;
    for n=1:length(x)
        count=count+x(n)*y(n-m);
    end
    gama(m)=count;
end
disp(gama);