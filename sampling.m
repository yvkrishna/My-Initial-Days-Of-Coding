t=[0:0.01:1]; 

y=5*sin(2*pi*10.*t); 

sf=100; 

T=1/sf; 

n=0:79; 

Y=5*sin(2*pi*10*n*T); 

subplot(2,1,1); 

plot(t,y); title("input signal");xlabel("t");ylabel("x  ( t )"); 

subplot(2,1,2); 

stem(n*T,Y);title("sampled signal of above signal");xlabel("t");ylabel("X ( t )"); 
