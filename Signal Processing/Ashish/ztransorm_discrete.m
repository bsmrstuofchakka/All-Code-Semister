clear
close all
n=[0,1,2,3,4,5,6,7,8,9];
x=sin(n);
syms z;
for i=0:11
    y=x.*z.^-i;
    disp(y)
end