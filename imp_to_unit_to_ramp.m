impulse123=[zeros(1,5) 1 zeros(1,5)];
unit123=[];
ramp123=[];
t=[-5:5];
k=0;
for i=1:length(impulse123)
    if impulse123(i)==1 || k==1
        unit123(i)=1;
        k=1;
    else
        k=0;
        unit123(i)=0;
    end
    if unit123(i)==1;
        ramp123(i)=i-5;
    else
        ramp123(i)=0;
    end
end
subplot(3,1,1);
stem(t,impulse123);
subplot(3,1,2);
stem(t,unit123);
subplot(3,1,3);
stem(t,ramp123);
