clc;
clear;
close all;
n=2:1:10;
%x=[0 1 0 1 0 1 0 1 0 1 0];
for i=1:length(n)
    x(i)=mod(n(i),2);
end
plot(n,x);