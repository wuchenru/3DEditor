#include <iostream>
#include <vector>

class Vector3 {
public:
    float x, y, z;

    Vector3(float x = 0, float y = 0, float z = 0) : x(x), y(y), z(z) {}

    Vector3 operator+(const Vector3& other) {
        return Vector3(x + other.x, y + other.y, z + other.z);
    }

    void print() {
        std::cout << "Position: (" << x << ", " << y << ", " << z << ")";
    }
};

class Object3D {
public:
    Vector3 position;
    Vector3 scale;
    Vector3 rotation;

    Object3D(Vector3 position, Vector3 scale, Vector3 rotation) 
        : position(position), scale(scale), rotation(rotation) {}

    virtual void render() = 0;
    void move(Vector3 delta) {
        position = position + delta;
    }
};

class Cube : public Object3D {
public:
    Cube(Vector3 position, Vector3 scale, Vector3 rotation)
        : Object3D(position, scale, rotation) {}

    void render() override {
        position.print();
    }
};

class Editor {
public:
    std::vector<Object3D*> objects;

    void addObject(Object3D* object) {
        objects.push_back(object);
    }

    void handleInput() {
        char input;
        std::cout << "Enter move command (w, a, s, d): ";
        std::cin >> input;
        Vector3 moveDelta;
        
        switch (input) {
            case 'w': moveDelta = Vector3(0, 1, 0); break;
            case 's': moveDelta = Vector3(0, -1, 0); break;
            case 'a': moveDelta = Vector3(-1, 0, 0); break;
            case 'd': moveDelta = Vector3(1, 0, 0); break;
            default: std::cout << "Invalid input"; return;
        }
        
        for (auto& obj : objects) {
            obj->move(moveDelta);
        }
    }

    void renderScene() {
        for (auto& obj : objects) {
            obj->render();
        }
    }
};

int main() {
    Editor editor;
    Cube* cube = new Cube(Vector3(0, 0, 0), Vector3(1, 1, 1), Vector3(0, 0, 0));
    editor.addObject(cube);

    while (true) {
        editor.handleInput();
        editor.renderScene();
    }

    delete cube;
    return 0;
}
