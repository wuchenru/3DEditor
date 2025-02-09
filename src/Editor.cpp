#include "Editor.h"
#include <iostream>

// Add object to the scene
void Editor::addObject(Object3D* object) {
    objects.push_back(object);
}

// Handle user input for moving objects
void Editor::handleInput() {
    char input;
    std::cout << "Enter movement command (w: up, s: down, a: left, d: right): ";
    std::cin >> input;

    Vector3 delta(0, 0, 0);
    if (input == 'w') delta = Vector3(0, 1, 0);
    if (input == 's') delta = Vector3(0, -1, 0);
    if (input == 'a') delta = Vector3(-1, 0, 0);
    if (input == 'd') delta = Vector3(1, 0, 0);

    for (auto& obj : objects) {
        obj->move(delta);
    }
}

// Render all objects in the scene
void Editor::renderScene() const {
    for (const auto& obj : objects) {
        obj->render();
    }
}
