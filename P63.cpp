// Question: Define a C++ class called Distance to represent distances in feet and inches.
//  Implement a friend function to add two Distance objects and display the result in feet and inches.
#include <iostream>

class Distance {
private:
    int feet;
    float inches;

public:
    Distance(int ft, float in) : feet(ft), inches(in) {}

    // Declare the friend function for addition
    friend Distance addDistances(const Distance& d1, const Distance& d2);

    void display() const {
        std::cout << "Feet: " << feet << " Inches: " << inches << "\"" << std::endl;
    }
};

// Friend function to add two Distance objects
Distance addDistances(const Distance& d1, const Distance& d2) {
    int newFeet = d1.feet + d2.feet;
    float newInches = d1.inches + d2.inches;

    if (newInches >= 12.0) {
        newFeet++;
        newInches -= 12.0;
    }

    return Distance(newFeet, newInches);
}

int main() {
    Distance distance1(5, 8.0);
    Distance distance2(3, 10.5);

    Distance sum = addDistances(distance1, distance2);

    std::cout << "Distance 1: ";
    distance1.display();

    std::cout << "Distance 2: ";
    distance2.display();

    std::cout << "Sum of Distances: ";
    sum.display();

    return 0;
}
