close all
clear all
clc
f=@(x)(x^3-x^2-x-1);
a=input('Enter the first approximation: ');
b=input('Enter the second approximation: ');


for i= 1:100
    
    
    p=(a+b)/2;
    if((f(p)*f(a))<=0)
        b=p;
    else
        a=p;
    end;
    
    
end;

    
  fprintf('The root of this equation is:  %f',p)
        
    
