syms t w;
x = exp(-t*2).*heaviside(t);
subplot(3,1,1);
ezplot(x,[-2,2]);
title('Input signal');

%fourier transform
x1 = fourier(x);
x1 = simplify(x1);
subplot(3,1,2);
ezplot(abs(x1));
title('Magnitude response of fourier transfer');

subplot(3,1,3);
ezplot(atan((imag(x1))/(real(x1))));
title('Phase response of fourier transfer');
