t=list(range(-5,11));
y=[];
for i in t:
  if i>=0 and i<=5:
    y.append(3)
  elif i>=6 and i<=9:
    y.append((2*i)+1)
  else:
    y.append(0)
stem(t,y);title("Random Signal");xlabel("t");ylabel("x ( t )")
