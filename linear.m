x1=random("uniform",0,1,1,100);
x2=random("normal",0,10,1,100);
c1=5;
c2=2;
y1=2.^x1;
y2=2.^x2;
y3=c1.*y1;
y4=c2.*y2;
y5=y3+y4;
 
y6=2.^((c1.^x1)+(c2.*x2));
if( round(y5-y6)==0 )
    disp('linear');
else
    disp('not linear');
end
