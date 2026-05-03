#include "player.hpp"
#include "../level/level.hpp"
#include <iostream>

player::player(std::string name, int health) : name_(name), health_(health) {}

void player::update() {
    // TODO: implement player update logic.
    // Update position, velocity, input, and game interactions here.
}

void player::render() {
    // TODO: implement player rendering.
    // Print status or draw the player to the current output target.
    if (name_ == "self") {
        return;
    }

    std::cout << "player::render() not implemented yet" << std::endl;
}

block player::getLookedAtBlock(const Level& givenLevel) {
    // TODO: implement logic to get the block the player is looking at.
    return block("Unknown", "No description available");
}

void player::move(float deltaTime) {
    // TODO: implement player movement logic.
}

void player::jump(float deltaTime) {
    // TODO: implement player jumping logic.
}

void player::takeDamage(int damage) {
    health_ -= damage;
    if (health_ < 0) {
        health_ = 0;
    }
}

int player::getHealth() {
    return health_;
}

void player::setHealth(int health) {
    health_ = health;
}

std::string player::getName() {
    return name_;
}
