#include <video/video.h>
#include <iostream>

using namespace std;

Video::Video(string name) : name(name)
{
}

Video::~Video()
{
}

void Video::play()
{
    cout << "Start '" << name << "' video" << endl << endl;
}
