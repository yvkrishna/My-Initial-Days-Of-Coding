function security_cam()
    clear all; close all; clc ; imaqreset;
    hcam = webcam;
    hshow = imshow(zeros(480,640,3,'uint8'));title('Security cam');
    ref_vid_img = snapshot(hcam);
    frames=2000;
    for i = 1:frames
        vid_img = snapshot(hcam);
        object_detected = security_pics(vid_img,ref_vid_img);
        set(hshow,'CData',object_detected);
        drawnow;
    end
    clear hcam;
end