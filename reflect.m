function [x,y] = reflect(u,n)
    x=-1*fliplr(n);
    y=fliplr(u);
end
