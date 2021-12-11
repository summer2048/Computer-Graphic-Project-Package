#include "grid.h"
#include "terrain.h"

grid terrain::getGrid(float x, float z){
    // x, z = floor(x), floor(z)
    int mX = x;
    int mZ = z;
    // The center p = (x,z) of every girds has x,z be even.
    if (mX%2 == 1) x += 1;
    if (mZ%2 == 1) z += 1;
    map<int, grid>::iterator it = dictionary.find(mX*stageSize+mZ);
    if (it == dictionary.end()) return null;
    return it->second;
}

void terrain::moveUp(float x, float z){
    for (map<int, grid> it = dictionary.begin(); it != dictionary.end(); ++it){
        if (pow(it->second.x-x,2)+pow(it->second.z-z,2) < pow(effectRadius,2)) it->second.height += movement;
    }
}

void terrain::moveDown(float x, float z){
    for (map<int, grid> it = dictionary.begin(); it != dictionary.end(); ++it){
        if (pow(it->second.x-x,2)+pow(it->second.z-z,2) < pow(effectRadius,2)) {
            if (it->second.height > movement)
                it->second.height -= movement;
            else 
                it->second.height = 0;
        }
    }
}

void terrain::paint(float x, float z, float effectSize, int material){
    for (map<int, grid> it = dictionary.begin(); it != dictionary.end(); ++it){
        if (pow(it->second.x-x,2)+pow(it->second.z-z,2) < pow(effectSize,2)) it->second.material = material;
    }
}

int terrain::count(int material){
    int count = 0;
    for (map<int, grid> it = dictionary.begin(); it != dictionary.end(); ++it){
        if (it->second.material == material) count++;
    }
    return count;
}

void terrain::generate(){
    /* Add code here to generate initial terrain */
}