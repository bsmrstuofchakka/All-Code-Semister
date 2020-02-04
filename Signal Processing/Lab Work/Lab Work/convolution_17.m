% This is just a cleaner code, same as the one you posted
clear variables
close all
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
m = 0: Ny-1;
% Make plot
figure
plot(m,y,'linewidth',3,'color','m')
grid;
a = title('Output of an LTI System y(n)');
set(a,'fontsize',14);
a = ylabel('y(n)');
set(a,'Fontsize',14);
a = xlabel('n');
set(a,'Fontsize',14);
% Using matlab built in function (you get the same results)
figure
y2 = conv(x,h);
plot(m,y2,'linewidth',3,'color','r')
grid;
a = title('Output y(n) using conv(x,h)');
set(a,'fontsize',14);
a = ylabel('y(n)');
set(a,'Fontsize',14);
a = xlabel('n ');
set(a,'Fontsize',14);