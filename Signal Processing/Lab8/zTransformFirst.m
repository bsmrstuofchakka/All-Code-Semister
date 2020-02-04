%%Generation of the Z-tranform of the sequences;

clc;
close all;
clear all;
syms a b w0 n;
disp('the sequence x1(n) is');
x1= sin(w0*n);
X1=ztrans(x1);
disp('The Z-Transform of x1(n) is');
disp(X1);
X1= simplify(X1);
x2=cos(w0*n);
X2=ztrans(x2);
disp('The Z-Transform if x2(n) is');
disp(X2);
x3=a.^n+b.^n;
X3=ztrans(x3);
disp('The Z-Tranform of x3(n) is');
X3= simplify(X3);
disp(X3);


