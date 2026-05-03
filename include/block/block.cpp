#include "block.hpp"
#include "../player/player.hpp"
#include <iostream>

block::block(std::string name, std::string description) : name_(name), description_(description) {}

void block::update() {
    // TODO: implement block update logic.
    // Update block state, properties, or interactions here.
}

void block::render(const player& givenPlayer) {
    // TODO: implement block rendering.
    // Use the given player state if the block needs to react to player proximity.
    std::cout << "block::render() not implemented yet" << std::endl;
}
