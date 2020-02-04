
syms t w
%input signal x(t)
x=2*(heaviside(t+2)-heaviside(t-2));
subplot(3,1,1);
ezplot(x,[-2,2]);
axis([-2.5 2.5 0 2.5]);

%fourier transform
x=int(x*exp(-1i*w*t),t,-5,5);
x1=simplify(x);
disp('The fourier trnsform of x(t) is :');
disp(x1);

subplot(3,1,2);
ezplot(x1);
%magnitude response
x2=sqrt((real(x1).^2)+(imag(x1).^2));
subplot(3,1,3);
ezplot(x2);

