clear all;clc;
n=[0:0.01:1];
y=sin(2*pi*1.*n);
dft=fft(y);
f=[0:1:100];
subplot(2,1,1);
plot(n,y);
subplot(2,1,2);
plot(f,dft);
