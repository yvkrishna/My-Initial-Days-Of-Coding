function [F] = fourierTransform(inputFunc,t)
a=0;
nu=linspace(-10,10,101);
F=zeros(size(nu));
    for m=1:101
        F(m)=sum(inputFunc.*exp((-1i*2*pi*t*nu(m))));
    end
figure,
plot(nu,abs(F));
end
