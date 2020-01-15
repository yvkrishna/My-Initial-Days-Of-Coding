clear all;clc;
t=linspace(-1,1,2^10);
func=zeros(size(t));
for freq=1:1
   func=func+sin(2*pi*freq*t);
end
figure,
plot(t,func);
a=fourierTransform(func);
