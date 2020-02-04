% Z transform
syms n w0;
signal=cos(n);
disp('The input signal is:');
disp(signal);
z_transform=ztrans(signal);
disp('The Z transform of signal_1 is:');
disp(z_transform);

% inverse Z transform
signal_1=iztrans(signal);
disp('The inverse Z transform of signal_1 is:');
disp(signal_1);

% Z transform
signal=cos(w0*n);
disp('The input signal is:');
disp(signal);
z_transform=ztrans(signal);
disp('The Z transform of signal_1 is:');
disp(z_transform);

% inverse Z transform
signal_1=iztrans(signal);
disp('The inverse Z transform of signal_1 is:');
disp(signal_1);

% first signal of x1(n)
syms n w0;
x1=n+1;
disp('The input equation is');
disp(x1);
x1=ztrans(x1);
disp('The Z-transform of x is:');
disp(x1);

x2=iztrans(x1);
disp('The inverse Z-transform of x is:');
disp(x2);

% second signal of x11(n)
x3=cos(w0*n);
disp('The input equation is');
disp(x3);
x3=ztrans(x3);
disp('The Z-transform of x is:');
disp(x3);


x4=iztrans(x3);
disp('The inverse Z-transform of x11 is:');
disp(x4);



