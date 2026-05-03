#pragma once
#include <string>
#include <vector>
#include "../block/block.hpp"

class Level;

class player {
public:
    player(std::string name, int health);

    void update();
    void render();

    block getLookedAtBlock(const Level& givenLevel);
    void move(float deltaTime);
    void jump(float deltaTime);
    void takeDamage(int damage);
    int getHealth();
    void setHealth(int health);
    std::string getName();

private:
    std::string name_;
    int health_;

    std::vector<float> position_;
    std::vector<float> velocity_;
    std::vector<float> acceleration_;
    std::vector<float> lookVector_;
};