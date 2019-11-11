function [return_image]=security_pics(image1,image2)
        img1bw=rgb2gray(image1);
        img2bw=rgb2gray(image2);
        imgdiff=abs(img1bw-img2bw);
        maxdiff=max(max(imgdiff));
        [irow,icol]=find(imgdiff==maxdiff);
        [m,n]=size(imgdiff);
        imgtresh = imgdiff > 8 ;
        imgfilled=bwareaopen(imgtresh,15);
        imboth= imoverlay(image2,imgfilled,[1 0 0]);
        imagestats= regionprops(imgfilled,'MajorAxisLength');
        imglengths = [imagestats.MajorAxisLength];
        idx=imglengths > 80;
        imagestatsfinal = imagestats(idx)
        disp(imagestatsfinal)
        if isempty(imagestatsfinal)
            disp('nothing is different here');
        else
            disp('something is here');
        end
        return_image=imboth;
end