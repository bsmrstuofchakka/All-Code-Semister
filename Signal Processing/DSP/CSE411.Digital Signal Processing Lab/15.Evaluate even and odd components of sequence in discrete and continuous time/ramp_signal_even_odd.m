t=-10:1:10;

for i=1:length(t)
    if t(i)<0
        ramp(i)=0;
    else 
        ramp(i)=t(i);
    end
end

subplot(2,2,1);
stem(t,ramp);
r=fliplr(ramp);

subplot(2,2,2);
stem(t,r);

t=-10:1:10;
e=0.5*(ramp+r);
subplot(2,2,3);
stem(t,e);

t=-10:1:10;
o=0.5*(ramp-r);
subplot(2,2,4);
stem(t,o);