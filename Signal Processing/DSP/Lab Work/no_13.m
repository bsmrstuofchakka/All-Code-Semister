clc;
%x(n)= u(n+3)+ 5u(n-15)+4u(n+10);
 n = -20:1:20;
 u=[zeros(1,20),ones(1,21)];
 u1= [zeros(1,17),ones(1,24)];
 u2=[zeros(1,35),ones(1,6)];
 u2 = 5*u2;
 u3=[zeros(1,10),ones(1,31)];
 u3 = 4*u3;
 x=u1+u2+u3;
 
 subplot(3,3,1);
 title('Figure u');
 plot(n,u);
 
 subplot(3,3,2);
 title('Figure u1');
 plot(n,u1);
 
 subplot(3,3,3);
 title('Figure u2');
 plot(n,u2);
 
 subplot(3,3,4);
 title('Figure u3');
 plot(n,u3);
 
 subplot(3,3,5);
 title('Figure x');
 plot(n,x);
 
 subplot(3,3,6);
 title('Figure u1');
 stem(n,u1);
 
 subplot(3,3,7);
 title('Figure u2');
 stem(n,u2);
 
 subplot(3,3,8);
 title('Figure u3');
 stem(n,u3);
  
 subplot(3,3,9);
 title('Figure x');
 stem(n,x);
 
 
 
 