#include <iostream>
#include <cmath>

class Shape {
public:
    // Virtual function to calculate the area (to be overridden by derived classes)
    virtual double calculateArea() const = 0;

    // Virtual function to calculate the perimeter (to be overridden by derived classes)
    virtual double calculatePerimeter() const = 0;
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    // Override the calculateArea function for a circle
    double calculateArea() const override {
        return M_PI * radius * radius;
    }

    // Override the calculatePerimeter function for a circle
    double calculatePerimeter() const override {
        return 2 * M_PI * radius;
    }
};

class Rectangle : public Shape {
private:
    double length;
    double width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}

    // Override the calculateArea function for a rectangle
    double calculateArea() const override {
        return length * width;
    }

    // Override the calculatePerimeter function for a rectangle
    double calculatePerimeter() const override {
        return 2 * (length + width);
    }
};

class Triangle : public Shape {
private:
    double side1;
    double side2;
    double side3;

public:
    Triangle(double s1, double s2, double s3) : side1(s1), side2(s2), side3(s3) {}

    // Override the calculateArea function for a triangle
    double calculateArea() const override {
        double s = (side1 + side2 + side3) / 2;
        return sqrt(s * (s - side1) * (s - side2) * (s - side3));
    }

    // Override the calculatePerimeter function for a triangle
    double calculatePerimeter() const override {
        return side1 + side2 + side3;
    }
};

int main() {
    // Create objects of Circle, Rectangle, and Triangle
    Circle circle(5.0);
    Rectangle rectangle(4.0, 6.0);
    Triangle triangle(3.0, 4.0, 5.0);

    // Calculate and display the area and perimeter for each shape
    std::cout << "Circle - Area: " << circle.calculateArea() << ", Perimeter: " << circle.calculatePerimeter() << std::endl;
    std::cout << "Rectangle - Area: " << rectangle.calculateArea() << ", Perimeter: " << rectangle.calculatePerimeter() << std::endl;
    std::cout << "Triangle - Area: " << triangle.calculateArea() << ", Perimeter: " << triangle.calculatePerimeter() << std::endl;

    return 0;
}
