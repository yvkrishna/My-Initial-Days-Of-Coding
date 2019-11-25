impulse123=[zeros(1,5) 1 zeros(1,5)];
[x,y]=convolution(impulse123,impulse123,-5,5,-5,5);
stem(x,y)
