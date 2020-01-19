function [] = fourierTransform2(signal)
    output=zeros(size(signal));
    n=0:length(signal)-1;
    for pneu=0:length(signal)-1
        for n=0:length(signal)-1
            output(pneu+1)= output(n+1)( signal(n+1)*exp( (-1i*2*pi*pneu.*n)/length(signal) ) ) ;
        end
    end
    figure,
    plot(0:length(signal)-1,abs(output));
end
