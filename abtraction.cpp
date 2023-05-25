#include <iostream>
using namespace std;

// Base class
class Shape {
public:
    virtual void draw() {
        cout << "Drawing a shape" << endl;
    }
};

// Derived class 1
class Circle : public Shape {
public:
    void draw() {
        cout << "Drawing a circle" << endl;
    }
};

// Derived class 2
class Rectangle : public Shape {
public:
    void draw() {
        cout << "Drawing a rectangle" << endl;
    }
};

int main() {
    Shape* shape;

    // Polymorphism through pointer/reference
    shape = new Circle();
    shape->draw();

    shape = new Rectangle();
    shape->draw();

    // Polymorphism through an array of objects
    Shape* shapes[2];
    shapes[0] = new Circle();
    shapes[1] = new Rectangle();

    for (int i = 0; i < 2; i++) {
        shapes[i]->draw();
    }

    return 0;
}
