% continuous triangualr function
%f=100;
%t=-1:1/f:1;
t=-1:.01:1;
a=tripuls(t);
subplot(2,1,1);
plot(t,a);
xlabel('Continuous Time Period');
ylabel('Amplitude');
title('Triangular Signal');

% discrte triangualr function
%f2=100;
%t2=-1:1/f:1;
t2=-1:.01:1;
a2=tripuls(t2);
subplot(2,1,2);
stem(t2,a2);
xlabel('Discrete Time Period');
ylabel('Amplitude');
title('Triangular Signal');
