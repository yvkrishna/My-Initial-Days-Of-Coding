t=arange(-2,2,0.1)

f=1; 
a=1; 
x=a*sin(2*pi*f*t); 
subplot(1,2,1)
plot(t,x);title("amplitude=1"+"\n"+"frequency=1");xlabel("t");ylabel("y ( t )")

a=2; 
f=2 
x=a*sin((2*pi*f*t)+(pi/2)); 
subplot(1,2,2)
plot(t,x); title("amplitude=2"+"\n"+"frequency=2");xlabel("t");ylabel("y ( t )")
