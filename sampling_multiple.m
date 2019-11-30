fs1=4; 

fs2=16; 

fs3=8; 

T1=1/fs1; 

T2=1/fs2; 

T3=1/fs3; 

fc1=2; 

fc2=8; 

fc3=4; 

N1=2; 

N2=16; 

N3=4; 

t1=[-1:0.001:1]; 

x1=sin(2*pi*t1); 

X1=0;X2=0;X3=0; 

for n=-N1:N1 

    X1=X1+sin(2*pi*n*T1)*sinc(2*fc1*(t1-n*T1));  

end 

X1=X1*( (2*fc1)/fs1 ); 

for n=-N2:N2 

    X2=X2+sin(2*pi*n*T2)*sinc(2*fc2*(t1-n*T2));  

end 

X2=X2*( (2*fc2)/fs2 ); 

for n=-N3:N3 

    X3=X3+sin(2*pi*n*T3)*sinc(2*fc3*(t1-n*T3));  

end 

X3=X3*( (2*fc3)/fs3 ); 
