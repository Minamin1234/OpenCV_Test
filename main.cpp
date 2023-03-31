#include <iostream>
#include <string>
#include <opencv2/opencv.hpp>

using namespace std;

int main() {
    cout << "Hello" << endl;
    cv::Mat img = cv::imread("sample.jpg");
    string WINNAME = "Test";
    cv::imshow(WINNAME, img);
    cv::waitKey(0);
    cv::destroyWindow(WINNAME);
    return 0;
}