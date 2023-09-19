//  Question Create a C++ program that showcases polymorphism using a base class Shape
//  and derived classes Circle and Rectangle. Implement a calculateArea() method in each class, 
//  and demonstrate polymorphism by creating an array of shapes and calculating
//   and displaying their areas dynamically.
#include<iostream>
using namespace std;
class Shape{
    public:
    virtual double calculateArea(){
        return -1;
    } // return type is same as the function it's overloading
};
class Circle:public Shape{
    double radius;
    public:
    Circle(double radius):radius(radius){}
    double calculateArea(){
        return 3.142 * radius *radius;
    }
};
class Rectangle:public Shape{
    double length, width;
    public:
    Rectangle (double l , double w) :length(l),width(w){}
    double calculateArea () {
        return length*width;
    }
};
int main(){
    Shape* shapes[3]; // An array of pointers to Shape objects

    Circle circle(5.0);
    Rectangle rectangle(4.0, 6.0);

    shapes[0] = &circle;
    shapes[1] = &rectangle;

    // Calculate and display the areas using polymorphism
    for (int i = 0; i < 2; ++i) {
        cout << "Area of Shape " << i + 1 << ": " << shapes[i]->calculateArea() << endl;
    }
}