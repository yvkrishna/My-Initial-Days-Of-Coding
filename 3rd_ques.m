y=[2,3,5,6,4,7];
x=[0:1:5];​
[x,y]=impulse2(-5,5);​
​
% H1​
​
b1=[1,0,0,5];​
a1=[1,0,2,0];​
c1=filter(b1,a1,y);​
​
%H2​
​
b2=[1,0,0.5];​
a2=[1,0,0];​
c2=filter(b2,a2,y);​
​
%H3​
​
b3=[0.3333,0.3333,0.3333];​
a3=[1,0,0];​
c3=filter(b3,a3,y);​
​
figure​
y123=conv(y,y2);​
x123=[-15:15]​
stem(x123,y123);;xlabel('t');ylabel('h ( t )');title('output response due to combined system')​
