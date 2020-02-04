x=[1 2 3 4 5 6 7 8];
l=length(x);
X=0;
z=sym('z');
for n=0:l-1
    X=X+x(n+1)*z^(-n);
end
disp('Display output');
disp(X);