#pragma once
#include <iostream>
#include <string>

class Level {
public:
    Level(int width, int height) : width_(width), height_(height) {
        // Initialize the tiles with empty strings
        for (int i = 0; i < width_; ++i) {
            for (int j = 0; j < height_; ++j) {
                tiles_[i][j] = "";
            }
        }
    }

    void update();
    void render();

    

private:

    // Level dimensions
    int width_;
    int height_;

    std::map<std::string, std::string> tileTypes_; // Map to hold tile types and their properties

    // 2D array to hold tile information
    std::string tiles_[100][100]; // Assuming a maximum size of 100x100 for simplicity

};