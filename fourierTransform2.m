function [output] = fourierTransform2(signal)
    output=zeros(size(signal));
    nu=linspace(0,20,length(signal));
    n=0:length(signal)-1;
    for pneu=0:length(signal)-1
        output(pneu+1)=sum( ( signal.*exp( (-1i*2*pi*pneu.*n)/length(signal) ) ) );
    end
    figure,
    plot(nu,abs(output))
end
