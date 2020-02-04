close all;
clc;
clear;
t=-10:0.01:10;
for i=1:length(t)
    if t(i)<0
        am(i)=0;
    else
        am(i)=1;
    end
end
plot(t,am);