#pragma once

#include <string>

class Video
{
public:
    Video(std::string name);
    ~Video();

    void play();

private:
    std::string name;
};
