#ifndef OBJECT3D_H
#define OBJECT3D_H

#include "Vector3.h"

class Object3D {
public:
    Vector3 position;
    Vector3 scale;
    Vector3 rotation;

    // Constructor updated to match definition in .cpp
    Object3D(float x, float y, float z, float scale);

    virtual void render() const = 0;  // Pure virtual function

    void move(const Vector3& delta);  // Move the object
    void printPosition() const;  // Print object's position
};

#endif
