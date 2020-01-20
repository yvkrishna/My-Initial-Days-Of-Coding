clear all;clc;
[y,Fs] = audioread('Bhaja_Govindam.mp3');
t=linspace(0,5,length(y));
a=fourierTransform(y(1:length(y)),t);