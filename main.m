clear all;clc;
t=linspace(-10,10,2^15);
func=zeros(size(t));
for freq=1:2
   func=func+sin(2*pi*freq*t);
end
figure,
plot(t,func);
% a=fourierTransform(func,t);
result=fourierTransform2(func);
figure,
plot(t,abs(result))
