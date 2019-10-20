t=list(range(-2,11));
y=[];
for i in t:
  if i>=0 and i<=3:
    y.append(i)
  elif i>3 and i<=6:
    y.append(i-1)
  else:
    y.append(0)
plot(t,y);title("Random Signal");xlabel("t");ylabel("x ( t )")
