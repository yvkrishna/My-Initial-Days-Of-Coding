function [x,y] = impulse2(n1,n2)
    y=[];j=1;
    x=n1:n2;
    for i=n1:n2
        if i==0
            y(j)=1;
        else
            y(j)=0;
        end
        j=j+1;
    end
end
