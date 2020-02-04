close all;
clear;
x=[1,2,3,4,5,6,7];
h=[1,1,1,1];
con=deconv(x,h);
disp(con);