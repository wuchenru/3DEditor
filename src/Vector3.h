#ifndef VECTOR3_H
#define VECTOR3_H

#include <iostream>  // Include the necessary header for std::ostream

class Vector3 {
public:
    float x, y, z;

    Vector3(float x = 0, float y = 0, float z = 0);  // Constructor

    // Overload the + operator to add two Vector3 objects
    Vector3 operator+(const Vector3& other) const;

    // Declare the stream insertion operator for printing
    friend std::ostream& operator<<(std::ostream& os, const Vector3& v);
};

#endif
