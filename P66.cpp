// Program to Calculate Width and Length using Perimeter and Area
#include <iostream>

class Rectangle {
private:
    double width;
    double length;

public:
    Rectangle(double w, double l) : width(w), length(l) {}

    double calculateArea() const {
        return width * length;
    }

    double calculatePerimeter() const {
        return 2 * (width + length);
    }

    void display() const {
        std::cout << "Width: " << width << " Length: " << length << std::endl;
        std::cout << "Area: " << calculateArea() << std::endl;
        std::cout << "Perimeter: " << calculatePerimeter() << std::endl;
    }
};

int main() {
    Rectangle rect(5.0, 10.0);
    rect.display();

    return 0;
}
