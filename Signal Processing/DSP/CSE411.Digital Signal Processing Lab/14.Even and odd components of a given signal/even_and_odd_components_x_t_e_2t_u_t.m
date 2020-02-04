%even and odd components x(t)=e^-(2tu(t))

t=-5:1:5;
u=[zeros(1,5),ones(1,6)];
subplot(2,2,1);
ut=stem(t,u);
x=exp^(-(2*t*ut));
subplot(2,2,2);
stem(t,x);