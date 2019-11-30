t=[0:0.001:0.4]; 

y=(3*cos(2*pi*10.*t))-(2*sin(2*pi*15.*t)); 

  

sf1=120; 

sf2=60; 

sf3=30; 

sf4=15; 

  

T1=1/sf1; 

T2=1/sf2; 

T3=1/sf3; 

T4=1/sf4; 

  

n=0:319; 

Y1=(3*cos(2*pi*10*n*T1))-(2*sin(2*pi*15*n*T1)); 

Y2=(3*cos(2*pi*10*n*T2))-(2*sin(2*pi*15*n*T2)); 

Y3=(3*cos(2*pi*10*n*T3))-(2*sin(2*pi*15*n*T3)); 

Y4=(3*cos(2*pi*10*n*T4))-(2*sin(2*pi*15*n*T4)); 

  

subplot(3,2,1); 

plot(t,y); title("input signal");xlabel("t");ylabel("x  ( t )"); 

subplot(3,2,2); 

stem(n*T1,Y1);title("sampled signal for sf = 120");xlabel("t");ylabel("X ( t )"); 

subplot(3,2,3); 

stem(n*T2,Y2);title("sampled signal for sf = 60");xlabel("t");ylabel("X ( t )"); 

subplot(3,2,4); 

stem(n*T3,Y3);title("sampled signal for sf = 30");xlabel("t");ylabel("X ( t )"); 

subplot(3,2,5); 

stem(n*T4,Y4);title("sampled signal for sf = 15");xlabel("t");ylabel("X ( t )");
