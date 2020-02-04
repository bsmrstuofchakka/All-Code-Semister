t=0:0.01:2
a=2;
s=a*sin(2*pi*t);
subplot(2,2,1);
stem(t,s);
r=fliplr(s);
subplot(2,2,2);
stem(t,r);

e=0.5*(s+r);
subplot(2,2,3);
stem(t,e);
axis([0 2 -4 4]);

o=0.5*(s-r);
subplot(2,2,4);
stem(t,o);
axis([0 2 -4 4]);