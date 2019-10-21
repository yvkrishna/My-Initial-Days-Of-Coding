function [x,y] = fourier_series(N)
    y=0;
     x=[0:0.01:1];
    for n=1:N+1
        a=2/(pi*n);
        b=(1-(-1)^n);
        w=(2*pi);
        c=sin(n*w*x)
        y=y+(a.*b.*c)
    end
end
