#pragma once
#include <map>
#include <string>
#include <vector>

class player;

class block {
public:
    block(std::string name, std::string description);

    void update();
    void render(const player& givenPlayer);

private:
    std::string name_;
    std::string description_;

    std::map<std::string, std::string> properties_;
    std::vector<int> position_;
    std::vector<int> size_;
};