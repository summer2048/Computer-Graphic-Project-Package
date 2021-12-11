#ifndef TERRAIN_H
#define TERRAIN_H
#include <map>
#include "grid.h"

class terrain {
public:
    static girdSize = 2; // grids is 2x2
    static stageSize = 100; // stage is 100x100 grids
    static movement = 0.5; // the scale of moveUp/Down 
    map<int, grid> dictionary; // Use dictionary to find grid in O(1)
    float effectRadius; // Used in moveUp/Down function
    grid getGrid(float x, float z); // Get the grid which contains the point (x,..,z)
    void moveUp(float x, float z); // Increasing the height of some grids centring at (x,..,z)
    void moveDown(float x, float z);
    void paint(float x, float z, float effectSize, int material); // Coloring some grids centring at (x,..,z)
    int count(int material);
    void generate(); // Optional, use this method to auto-generate terrain


    terrian();
}

#endif