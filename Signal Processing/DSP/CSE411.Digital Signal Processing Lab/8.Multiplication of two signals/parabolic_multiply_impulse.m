t=-10:1:10;
%i=[zeros(1,10),ones(1,1),zeros(1,10)];
for i=1:length(t)
    if t(i)<0 && t(i)>0
    imp(i)=0;
    else if t(i)==0
            imp(i)=1;
        end
    end
end
subplot(2,3,1);
stem(t,imp);
axis([-10 10 0 4]);
xlabel('Continuous Time');
ylabel('Amplitude');
title('Continuous Time impulse Function');

t=-10:1:10;
%i=[zeros(1,10),ones(1,1),zeros(1,10)];
par=0.5*(t.^2);
subplot(2,3,2);
stem(t,par);
axis([-10 10 0 60]);
xlabel('Continuous Time');
ylabel('Amplitude');
title('Continuous Time parabola Function');

t=-10:.01:10;
%i=[zeros(1,10),ones(1,1),zeros(1,10)];
for i=1:length(imp)
   add(i)=imp(i)*par(i);
end
subplot(2,3,3);
stem(t,add);
axis([-10 10 0 60]);
xlabel('Continuous Time');
ylabel('Amplitude');
title('Continuous Time Sine Function');