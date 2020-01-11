function [f] = fourierTransform(inputFunc)
f=zeros(size(inputFunc));
a=0;
t=linspace(-1,1,2*10);
    for k=0:length(inputFunc)-1
        f(k+1)=sum(inputFunc(k+1)*exp(-1i*k*2*pi*t));
    end
    figure,
plot(t,abs(f));
end
