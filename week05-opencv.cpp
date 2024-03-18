#include <opencv/highgui.h>
int main()
{
    ///Intel performance library
    IplImage * img=cvLoadImage("c:/lala.jpg");
    cvShowImage("img",img);
    cvWaitKey(0);
}
