#ifndef EDITOR_H
#define EDITOR_H

#include "Object3D.h"
#include <vector>  // Include the vector header

class Editor {
public:
    std::vector<Object3D*> objects;  // Store objects in a vector
    void addObject(Object3D* object);  // Add object to scene
    void handleInput();  // Handle user input for movement
    void renderScene() const;  // Render all objects
};

#endif
