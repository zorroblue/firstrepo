#include "opencv2/highgui.hpp"

#include <iostream>
#include <ctype.h>

using namespace cv;
using namespace std;
int main(int argc, const char** argv)
{
	Mat img= imread("img.png");
	if(!img.data)
	{
		printf("No image loaded");
		return -1;
	}
	int i,j,avg;
	for(i=0;i<img.rows;i++)
	{
		for(j=0;j<img.cols;j++)
		{
avg=(img.at<Vec3b>(i,j)[0]+img.at<Vec3b>(i,j)[1]+img.at<Vec3b>(i,j)[2])/3;
if(avg<150)
img.at<Vec3b>(i,j)=255;
		}
	}
	namedWindow("Display Image", CV_WINDOW_AUTOSIZE );
    imshow("Display Image", img);

    waitKey(0);

    return 0;
}


}