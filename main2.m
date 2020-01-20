clear all;clc
recObj = audiorecorder;
time=5;
disp('Start speaking.');
recordblocking(recObj, time);
disp('End of Recording.');
y = getaudiodata(recObj);
plot(y);
t=linspace(0,time,length(y));
fourierTransform(y',t);