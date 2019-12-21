clear all;clc;
n=[-10:0.01:10];
y=sin(2*pi*4*n);
nu=(-10:0.01:10);
F=zeros(size(nu));
for k=1:length(nu)
for i=1:length(n)
F(k)=F(k)+y(i)*exp(-j*nu(k)*2*pi*n(i));
end
end
plot(nu,abs(F));
