from matplotlib.pyplot import plot,stem
y=[0]*5+[1]+[0]*5
x=list(range(-5,6))
subplot(1,2,1)
plot(x,y);xlabel("t");ylabel("x ( t )");title("Impulse signal x ( t )")
subplot(1,2,2)
stem(x,y);xlabel("n");ylabel("x [ n ]");title("Impulse signal x [ n ]")
