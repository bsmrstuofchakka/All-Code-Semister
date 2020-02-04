clc;
clear all;
close all;


%%x=[1 -2 3 -4];
%%h=[4 -3 2 -1];

x=input('Enter the first sequence: ');

h=input('Enter the second sequence: ');

con_matrix=conv(x,h);
disp(con_matrix);