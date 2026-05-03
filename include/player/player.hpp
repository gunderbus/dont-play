#pragma once
#include <iostream>
#include <string>

class player {
public:
    player(std::string name, int health) : name_(name), health_(health) {}

    void update();
    void render();

    block getLookedAtBlock(level givenLevel);
    void move(float deltaTime);
    void jump(float deltaTime);
    void takeDamage(int damage);
    int getHealth();
    void setHealth(int health);
    std::string getName();

private:
    std::string name_; // Name of the player
    int health_; // Health of the player

    std::vector<float> position_; // Position of the player in the level (x, y)
    std::vector<float> velocity_; // Velocity of the player (x, y)
    std::vector<float> acceleration_; // Acceleration of the player (x, y)
    std::vector<float> lookVector_; // Direction the player is looking (x, y)
}