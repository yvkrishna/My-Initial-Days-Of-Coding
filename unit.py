from matplotlib.pyplot import plot,stem
y=[0]*5+[1]*6
x=list(range(-5,6))
subplot(1,2,1)
plot(x,y);xlabel("t");ylabel("x ( t )");title("Unit signal x ( t )")
subplot(1,2,2)
stem(x,y);xlabel("n");ylabel("x [ n ]");title("Unit signal x [ n ]")
