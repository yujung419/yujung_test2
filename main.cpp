
#include <iostream>

#include <opencv2/opencv.hpp>


#ifdef _DEBUG
#pragma comment(lib, "opencv_world450d.lib") //debug�϶� �� ���̺귯�� ����
#else
#pragma comment(lib, "opencv_world450.lib") //release�� �� �� ���̺귯�� ����
#endif


using namespace std;
using namespace cv;

//Mat imgA;

int main(int, char) {
	namedWindow("img", 0);
	namedWindow("img2", 0);
	Mat img = imread("kang.jpg.jpg");
	Mat img2;
	//Sobel(img, img2, img.depth(), 1, 0); //img�� ����, img2�� �̹��� ó���� ��
	flip(img, img2, 1); //�¿� ��Ī�����ִ� ����ó�� �Լ�
	imshow("img", img);
	imshow("img2", img2);
	waitKey(0);
	

	destroyAllWindows();

	return 0;
}