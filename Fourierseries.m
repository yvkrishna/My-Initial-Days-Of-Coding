t=(-100:0.01:100);
[a,sizet]=size(t);
f=sin(2*pi*4*t);
% plot(t,f)
nu=(-10:0.01:10);
F=zeros(size(nu));
[a,sizenu]=size(nu);
for k=1:sizenu
for m=1:sizet
F(k)=F(k)+f(m)*exp(-1i*2*pi*nu(k)*t(m));
end
end
figure,
plot(nu,abs(F))
