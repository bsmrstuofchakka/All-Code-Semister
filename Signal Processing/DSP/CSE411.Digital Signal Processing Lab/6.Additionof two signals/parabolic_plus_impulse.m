t=-10:1:10;
imp=[zeros(1,10),ones(1,1),zeros(1,10)];
subplot(2,3,1);
stem(t,imp);
xlabel('Continuous Time');
ylabel('Amplitude');
title('Continuous Time impulse Function');

par=0.5*(t.^2);
subplot(2,3,2);
stem(t,par);
xlabel('Continuous Time');
ylabel('Amplitude');
title('Continuous Time parabola Function');

for i=1:length(imp)
   add(i)=imp(i)+par(i);
end
subplot(2,3,3);
stem(t,add);
xlabel('Continuous Time');
ylabel('Amplitude');
title('Impulse + Parabola');