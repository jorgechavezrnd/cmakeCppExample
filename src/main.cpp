#include <iostream>
#include <math/mathUtils.h>
#include <video/video.h>

using namespace std;

int main()
{
    cout << "Test running 2" << endl << endl;

    int x = 10;
    int y = 8;
    MathUtils mathUtils(x, y);

    cout << x << " + " << y << " = " << mathUtils.sum() << endl << endl;

    Video video("Video 1 test!!!");

    video.play();

    return 0;
}
