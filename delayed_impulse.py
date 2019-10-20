from matplotlib.pyplot import plot,stem
to=5;
x=list(range(-5,6))
y=[]
for k in x:
  if k==to:
    y.append(1)
  else:
    y.append(0)
subplot(1,2,1)
plot(x,y);xlabel("t");ylabel("x ( t - to)");title("Delayed Unit signal ")
subplot(1,2,2)
stem(x,y);xlabel("n");ylabel("x [ n - no ]");title("Delayed Unit signal")
