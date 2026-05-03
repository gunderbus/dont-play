#pragma once
#include <iostream>
#include <string>

class block {
public:
    block(std::string name, std::string description) : name_(name), description_(description) {}

    void update();
    void render(player givenPlayer);

private:
    std::string name_; // Name of the block
    std::string description_; // Description of the block

    std::map<std::string, std::string> properties_; // Map to hold block properties

    std::vector<int> position_; // Position of the block in the level (x, y)    
    std::vector<int> size_; // Size of the block (width, height)
}