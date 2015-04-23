#include "highgui.h"

int main(int argc, char** argv) {
    CvCapture* capture = cvCreateCameraCapture(0) ;
    IplImage* frame;

    while(1) {
        frame = cvQueryFrame(capture);
        if(!frame) break;
            cvShowImage("Main view", frame);
            char c = cvWaitKey(33);
        if(c == 27) break;
    }
    cvReleaseCapture(&capture);
}