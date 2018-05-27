// this is a test file
//2018-05-26

#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>

using namespace cv;

int main()
{
    Mat srcImage = imread("1.jpg");
    Mat dstImage;
    Mat element = getStructuringElement(MORPH_RECT,Size(7,7));
    erode(srcImage,dstImage,element);
    imshow("腐蚀操作",dstImage);
    
    waitKey(0);
    
    return 0;
}
