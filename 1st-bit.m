
% 1st bit
clear;clc

x=[1 0 0.5 1 1 1];
t=[-1:1:4];
[x2,y2]=even_part(x,-1,4);
[x3,y3]=odd_part(x,-1,4); 
subplot(1,3,1)
plot(t,x);xlabel('t');ylabel('x ( t )');title('Input signal')
subplot(1,3,2); 
plot(x2,y2); xlabel('t');ylabel('x ( t ) + x ( - t ) / 2');title('even signal')
subplot(1,3,3); 
plot(x3,y3); xlabel('t');ylabel('x ( t ) - x ( - t ) / 2');title('odd signal')