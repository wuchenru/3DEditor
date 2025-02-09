#include "Vector3.h"
#include <iostream>

Vector3::Vector3(float x, float y, float z) : x(x), y(y), z(z) {}

Vector3 Vector3::operator+(const Vector3& other) const {
    return Vector3(x + other.x, y + other.y, z + other.z);
}

// Define the stream insertion operator to print Vector3
std::ostream& operator<<(std::ostream& os, const Vector3& v) {
    os << "(" << v.x << ", " << v.y << ", " << v.z << ")";
    return os;
}
