t=[0:0.0001:1]; 

y1=sin(2*pi*50.*t); 

sf1=8000; 

T1=1/sf1; 

n=0:319; 

Y1=5*sin(2*pi*50*n*T1); 

  

  

y2=sin(2*pi*1000.*t); 

sf2=8000; 

T2=1/sf2; 

Y2=5*sin(2*pi*1000*n*T2); 

  

Y=Y1.*Y2; 

  

subplot(3,2,1); 

plot(t,y1); title("1st input signal");xlabel("t");ylabel("x 1 ( t )"); 

subplot(3,2,2); 

plot(t,y2);title("2nd input signal");xlabel("t");ylabel("x 2 ( t )"); 

subplot(3,2,3); 

stem(t,y1.*y2);title("x 1 ( t ) * x 2 ( t )");xlabel("t");ylabel("X ( t )"); 

subplot(3,2,4); 

stem(n*T2,Y1);title("sampled signal of 1st signal");xlabel("t");ylabel("x 1 ( t )"); 

subplot(3,2,5); 

stem(n*T1,Y2);title("sampled signal of 2nd signal");xlabel("t");ylabel("x 2 ( t )"); 

subplot(3,2,6); 

stem(n*T1,Y);title("sampled signal x 1 ( t ) * x 2 ( t )l");xlabel("t");ylabel("X ( t )");
