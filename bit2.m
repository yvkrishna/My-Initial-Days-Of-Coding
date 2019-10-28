clear;clc

x=[1 0 0.5 1 1 1];
t=[-1:1:4];
[x2,y2]=sigshift(t,x,2);
subplot(1,2,1)
plot(t,x);xlabel('t');ylabel('x ( t )');title('Input signal')
subplot(1,2,2); 
plot(x2,y2);xlabel('t');ylabel('x ( t - 2 )');title('Output signal')
