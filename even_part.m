function [x,y]=even_part(x1,n1,n2) 
[m,k]=sigfold(n1:n2,x1); 
[a,l]=sigadd(x1,k,n1,n2,m(1),m(length(m))); 
y=a./2; 
x=l; 
end 