
#include <iostream>

#include <opencv2/opencv.hpp>


#ifdef _DEBUG
#pragma comment(lib, "opencv_world450d.lib") //debug일때 이 라이브러리 실행
#else
#pragma comment(lib, "opencv_world450.lib") //release일 때 이 라이브러리 실행
#endif


using namespace std;
using namespace cv;

//Mat imgA;

int main(int, char) {
	namedWindow("img", 0);
	namedWindow("img2", 0);
	Mat img = imread("kang.jpg.jpg");
	Mat img2;
	//Sobel(img, img2, img.depth(), 1, 0); //img는 원본, img2는 이미지 처리된 것
	flip(img, img2, 1); //좌우 대칭시켜주는 영상처리 함수
	imshow("img", img);
	imshow("img2", img2);
	waitKey(0);
	

	destroyAllWindows();

	return 0;
}