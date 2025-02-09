#include "Object3D.h"
#include <iostream>

// Constructor updated to match the header
Object3D::Object3D(float x, float y, float z, float scale)
    : position(x, y, z), scale(scale) {}

void Object3D::move(const Vector3& translation) {
    position = position + translation;  // Assuming + operator is overloaded for Vector3
}

void Object3D::printPosition() const {
    std::cout << "Object position: (" << position.x << ", " << position.y << ", " << position.z << ")\n";
}
