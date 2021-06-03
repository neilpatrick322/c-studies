//including all the necessary headers
#include "opencv2/core.hpp"
#include <iostream>
#include <opencv2/opencv.hpp>
//defining the namespace std and cv
using namespace std;
using namespace cv;
void main()
{
	//creating a matrix using mat function and displaying the matrix as the output on the screen
	Mat Mvalue(4, 4, CV_8UC3, Scalar(1, 0, 1));
	cout << "The resulting matrix is:\n";
	cout << "Mvalue = " << endl << " " << Mvalue << endl << endl;
}