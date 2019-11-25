function [x,y]=convolution(u,v,n1,n2,n3,n4)
    y=[];
    k=1;
    x=n1+n3:n2+n4;
    [x1,y1]=reflect(v,n3:n4);
    n=n1+n3;
    for i=n:100
        [x2,y2]=sigshift(y1,x1,i);
        [x3,y3]=sigmultiply(u,y2,n1,n2,x2(1),x2(length(x2)));
        y(k)=sum(y3);
        k=k+1;
    end
end
