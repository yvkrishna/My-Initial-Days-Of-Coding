from matplotlib.pyplot import *
from numpy import *
a=-5;
c=1;
t=arange(0,2,0.1)
y=c*exp(a*t)
plot(t,y);xlabel('t');ylabel('x ( t )');title('Exponential Damping Signal'+'\n'+'x( t ) = ce^(-ax)')
