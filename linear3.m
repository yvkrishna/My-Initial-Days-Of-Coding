x1=random("uniform",0,1,1,100);
x2=random("normal",0,1,1,100);
 
y3=(0.5.*(x1+shift(x1,0,1))) + (0.5.*(x2+shift(x2,0,1)));
y4=0.5.*((x1+shift(x1,0,1))+(x2+shift(x2,0,1)));
 
s=y4-y3;
 
if(s==0)
    disp("linear")
else
    disp("non linear")
end
