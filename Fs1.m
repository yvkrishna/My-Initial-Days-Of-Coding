clear all;clc;
n=[-10:0.01:10];
y=cos((6*pi.*n)/16);
nu=(0:(2*pi/1000):(2*pi-(2*pi/1000)));
F=zeros(size(nu));
for k=1:length(nu)
for i=1:length(n)
F(k)=F(k)+y(i)*exp(-j*nu(k)*2*pi*n(i));
end
end
plot(nu,abs(F));
