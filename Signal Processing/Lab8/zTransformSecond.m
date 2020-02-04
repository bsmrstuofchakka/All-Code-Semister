%% Z-tranform and Inverse Z-tranform of given sequences;

clc;
close all;
clear all;
syms w0 n;
% first signal x1(n)
x1=n+1;
disp('the input equation is ');
disp(x1);
X1=ztrans(x1);
disp('The Z-Transform is');
disp(X1);
X11=iztrans(X1);
disp('The inverse Z-Transform is');
disp(X11);

% second signal x2(n)
x2=cos(w0*n);
disp('the input equation is ');
disp(x2);
X2=ztrans(x2);
disp('The Z-Transform is');
disp(X2);
X22=iztrans(X2);
disp('The inverse Z-Transform is');
disp(X22);


