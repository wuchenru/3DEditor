#include "Cube.h"
#include <iostream>

// Constructor should match the declaration in Cube.h
Cube::Cube(float x, float y, float z, float scale)
    : Object3D(x, y, z, scale) {}

void Cube::render() const {
    // Now the Vector3 can be printed directly using << operator
    std::cout << "Rendering cube at position: " << position 
              << " with scale: " << scale << "\n";
}
