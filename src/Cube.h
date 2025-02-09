#ifndef CUBE_H
#define CUBE_H

#include "Object3D.h"

class Cube : public Object3D {
public:
    // The constructor should match the parameters of Object3D's constructor.
    Cube(float x, float y, float z, float scale);  // Constructor definition

    void render() const override;  // Correctly overriding the base class function
};

#endif
