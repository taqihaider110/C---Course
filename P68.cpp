#include <iostream>

class Shape {
public:
    void draw() {
        std::cout << "Drawing a shape" << std::endl;
    }
};

class Circle : public Shape {
public:
    void draw() {
        std::cout << "Drawing a circle" << std::endl;
    }
};

int main() {
    Circle circle;
    Shape& shapeRef = circle;
    Shape* shapePtr = &circle;
    
    // Static binding - the draw() method of the Shape class is called
    circle.draw();    // Outputs "Drawing a circle"
    shapeRef.draw();  // Outputs "Drawing a shape"
    shapePtr->draw(); // Outputs "Drawing a shape"
    
    return 0;
}
