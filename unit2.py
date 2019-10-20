x=list(range(-5,5))
m=[]; 
i=0; 
for j in x:
  if j>=0:
    m.append(1); 
  else:
    m.append(0); 
subplot(1,2,1)
plot(x,m);xlabel("t");ylabel("x ( t )");title("Unit signal x ( t )")
subplot(1,2,2)
stem(x,m);xlabel("n");ylabel("x [ n ]");title("Unit signal x [ n ]")
