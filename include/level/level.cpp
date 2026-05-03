#include "level.hpp"
#include <iostream>

Level::Level(int width, int height) : width_(width), height_(height) {
    for (int i = 0; i < width_; ++i) {
        for (int j = 0; j < height_; ++j) {
            tiles_[i][j] = "";
        }
    }
}

void Level::update() {
    // TODO: implement level update logic.
    // Update tiles, move entities, or handle level state changes here.
}

void Level::render() {
    // TODO: implement level rendering.
    // For now, print a placeholder message.
    for (int i = 0; i < width_; ++i) {
        for (int j = 0; j < height_; ++j) {
            std::cout << tiles_[i][j] << " ";
        }
        std::cout << std::endl;
    }

    std::cout << "level::render() not implemented yet" << std::endl;
}

void Level::testPrint() {
    for (int i = 0; i < width_; ++i) {
        for (int j = 0; j < height_; ++j) {
            std::cout << tiles_[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

void Level::setTile(int x, int y, std::string tileType) {
    if (x >= 0 && x < width_ && y >= 0 && y < height_) {
        tiles_[x][y] = tileType;
    } else {
        std::cerr << "Error: Tile position (" << x << ", " << y << ") is out of bounds." << std::endl;
    }
}

void Level::addTileType(std::string tileName, block tileBlock) {
    tileTypes_[tileName] = tileBlock;
}

void Level::removeTileType(std::string tileName) {
    auto it = tileTypes_.find(tileName);
    if (it != tileTypes_.end()) {
        tileTypes_.erase(it);
    } else {
        std::cerr << "Error: Tile type '" << tileName << "' not found." << std::endl;
    }
}

std::string Level::getTileInfo(int x, int y) {
    if (x >= 0 && x < width_ && y >= 0 && y < height_) {
        return tiles_[x][y];
    }

    std::cerr << "Error: Tile position (" << x << ", " << y << ") is out of bounds." << std::endl;
    return "";
}

block Level::getTileTypeInfo(std::string tileType) {
    auto it = tileTypes_.find(tileType);
    if (it != tileTypes_.end()) {
        return it->second;
    }

    std::cerr << "Error: Tile type '" << tileType << "' not found." << std::endl;
    return block("Unknown", "No description available");
}