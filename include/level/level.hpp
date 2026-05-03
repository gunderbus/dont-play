#pragma once
#include <iostream>
#include <string>

class Level {
public:
    Level();
    void update();
    void render();
private:
    int width_;
    int height_;
    std::string[width_][height_] tiles_;
};