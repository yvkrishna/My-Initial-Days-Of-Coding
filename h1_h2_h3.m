[x,y]=impulse2(-5,5);

% H1

b1=[1,0,0,5];
a1=[1,0,2,0];
c1=filter(b1,a1,y);

%H2

b2=[1,0,0.5];
a2=[1,0,0];
c2=filter(b2,a2,y);

%H3

b3=[0.3333,0.3333,0.3333];
a3=[1,0,0];
c3=filter(b3,a3,y);

subplot(2,2,1);
stem(x,y);xlabel('t');ylabel('x ( t )');title('input signal - > impulse signal');
subplot(2,2,2);
stem(x,c1);xlabel('t');ylabel('h1 ( t )');title('impulse response for the h1 system');
subplot(2,2,3);
stem(x,c2);xlabel('t');ylabel('h2 ( t )');title('impulse response for the h2 system');
subplot(2,2,4);
stem(x,c3);xlabel('t');ylabel('h3 ( t )');title('impulse response for the h3 system');

