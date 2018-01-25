#include <opencv2/opencv.hpp>
#include "help.cpp"

#define DEFAULT_THRESHOLD 0.9

using namespace std;
using namespace cv;

int main(int argc, char* argv[]) {
    if (argc < 3) return help();
    
    Mat result;
    Mat targetImg = imread(argv[1], 1);
    Mat testImg = imread(argv[2], 1);
    double minVal, maxVal;
    Point minLoc, maxLoc;
    double valThreshold = argc == 4 ? stod(argv[3]) : DEFAULT_THRESHOLD;

    matchTemplate(targetImg, testImg, result, CV_TM_CCOEFF_NORMED);
    threshold(result, result, valThreshold, 1, CV_THRESH_TOZERO);

    minMaxLoc(result, &minVal, &maxVal, &minLoc, &maxLoc, Mat());

    if (maxVal >= valThreshold) {
        cout << "[" << maxLoc.x << ", " << maxLoc.y << ", " << maxVal << "]" << endl;
    }
    
    return 0;
}