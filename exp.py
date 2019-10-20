from numpy import *
x=arange(-5,5,0.1)

c=1; 
a=1; 
y=c*exp(a*x)
subplot(1,4,1); 
plot(x,y); title("exp growth");xlabel("t");ylabel("x ( t )") 

c=1; 
a=-1; 
res=c*exp(a*x); 
subplot(1,4,2); 
plot(x,res); title("exp decay");xlabel("t");ylabel("x ( t )")

c=4; 
a=1; 
res=c*exp(a*x); 
subplot(1,4,3); 
plot(x,res); title("exp growth");xlabel("t");ylabel("x ( t )")

c=4; 
a=-1; 
res=c*exp(a*x); 
subplot(1,4,4); 
plot(x,res);  title("exp decay");xlabel("t");ylabel("x ( t )")
