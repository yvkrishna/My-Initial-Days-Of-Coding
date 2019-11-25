function [y,n]=sigmultiply(x1,x2,n1,n2,n3,n4) 
    n=min(n1,n3):max(n2,n4); 
    y1=zeros(1,length(n)); 
    y2=y1; 
    y1(n>=n1 & n<=n2)=x1; 
    y2(n>=n3 & n<=n4)=x2; 
    y=y1.*y2; 
end 
