
clear all;
close all;
n = -20:20;
x = sin(n);            
h = [-1,-2,8,-2,-1];  

N = length(x);
M = length(h);
Ny = N + M -1;
                                                                                        
y = zeros(1,Ny);
for i = 1:N
      for k = 1:M
       y(i+k-1) = y(i+k-1) + h(k)*x(i);
      end
end
m = 0:Ny-1;
% Make plot
figure
stem(m,y)
title('Linear convolution of discrete time sequence');                                     


