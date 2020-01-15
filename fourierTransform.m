function [f] = fourierTransform(inputFunc)
f=zeros(size(inputFunc));
a=0;
freq=[0:1:length(inputFunc)-1];
    for n=0:length(inputFunc)-1
        for k=0:length(inputFunc)-1
            f(n+1)=f(n+1)+inputFunc(n+1)*exp((-1i*2*pi*k*n)/length(inputFunc));
        end
    end
figure,
plot(freq,abs(f));
end
