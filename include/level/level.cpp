#include "level.hpp"
#include <iostream>

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
    // TODO: implement test print logic.
    // Print level information for debugging purposes.
    for (int i = 0; i < width_; ++i) {
        for (int j = 0; j < height_; ++j) {
            std::cout << tiles_[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

void Level::setTile(int x, int y, std::string tileType) {
    // TODO: implement tile setting logic.
    // Set the tile at position (x, y) to the specified type.

    if (x >= 0 && x < width_ && y >= 0 && y < height_) {
        tiles_[x][y] = tileType;
    } else {
        std::cerr << "Error: Tile position (" << x << ", " << y << ") is out of bounds." << std::endl;
    }
}

void Level::addTileType(std::string tileName, block tileBlock) {
    // TODO: implement tile type addition logic.
    // Add a new tile type with the specified name and properties.

    tileTypes_[tileName] = tileBlock;
}

void Level::removeTileType(std::string tileName) {
    // TODO: implement tile type removal logic.
    // Remove the tile type with the specified name.
    auto it = tileTypes_.find(tileName);
    if (it != tileTypes_.end()) {
        tileTypes_.erase(it);
    } else {
        std::cerr << "Error: Tile type '" << tileName << "' not found." << std::endl;
    }
}

std::string Level::getTileInfo(int x, int y) {
    // TODO: implement tile info retrieval logic.
    // Return information about the tile at position (x, y).
    if (x >= 0 && x < width_ && y >= 0 && y < height_) {
        return tiles_[x][y];
    } else {
        std::cerr << "Error: Tile position (" << x << ", " << y << ") is out of bounds." << std::endl;
        return "";
    }
}

block Level::getTileTypeInfo(std::string tileType) {
    // TODO: implement tile type info retrieval logic.
    // Return the properties of the specified tile type.
    auto it = tileTypes_.find(tileType);
    if (it != tileTypes_.end()) {
        return it->second;
    } else {
        std::cerr << "Error: Tile type '" << tileType << "' not found."
                    << std::endl;   
    }
    return block("Unknown", "No description available");
}