% without built in function new
y=[1 2 3 4 5];
display('Display input');
disp(y);
Y=0;
len=length(y);
z=sym('z');
for n=0:len-1
    Y=Y+y(n+1)*z^(-n);
end
disp('Display output-->');
disp(Y);

% without built in function old
x=[1 2 3 4 5];
X=0;
l=length(x);
z=sym('z');
for n=0:l-1
    X=X+x(n+1)*z^(-n);
end
disp('Display output');
disp(X);