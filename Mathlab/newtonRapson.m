close all
clear all
clc

f=@(x) (x^3+2*x^2+10*x-20);
df=@(x) (3*x^2+4*x+10);

x=input('Enter the initial approximation: ');

for i=1:100
    x1=x-(f(x)/df(x));
    x=x1;
end;
fprintf('The root of the given equation: %f',x1);


