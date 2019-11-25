function [x,y]=convolution(u,v,n1,n2,n3,n4)
    x=n1+n3:n2+n4;
    [x1,y1]=reflect(v,n3:n4);
    
end
