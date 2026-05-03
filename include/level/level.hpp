#pragma once
#include <map>
#include <string>
#include "../block/block.hpp"

class Level {
public:
    Level(int width, int height);

    void update();
    void render();

    void testPrint();
    void setTile(int x, int y, std::string tileType);
    void addTileType(std::string tileName, block tileBlock);
    void removeTileType(std::string tileName);
    std::string getTileInfo(int x, int y);
    block getTileTypeInfo(std::string tileType);

private:
    int width_;
    int height_;

    std::map<std::string, block> tileTypes_;
    std::string tiles_[100][100];
};