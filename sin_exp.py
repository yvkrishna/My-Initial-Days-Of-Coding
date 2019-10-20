t=arange(-2,2,0.1)
x=arange(-2,2,0.1)
f=1; 
a=1; 
c=1; 
a=1; 

res1=c*exp(a*x)
res2=a*sin(2*pi*f*t);
res=res1*res2; 
subplot(1,2,1);
plot(x,res); title("sinusoidal exp growth");xlabel("t");ylabel("x ( t )")

c=1; 
a=-1; 

res1=c*exp(a*x); 
res2=a*sin(2*pi*f*t);
res=res1*res2; 
subplot(1,2,2); 
plot(x,res); title("sinusoidal exp decay");xlabel("t");ylabel("x ( t )")
