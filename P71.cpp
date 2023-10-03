#include <iostream>

class Color {
protected:
    int value; // Color value ranging from 0 to 255

public:
    // Constructor to initialize the color value
    Color(int val) {
        setValue(val);
    }

    // Setter method to set the color value within the valid range
    void setValue(int val) {
        if (val >= 0 && val <= 255) {
            value = val;
        } else {
            std::cerr << "Invalid color value. Value must be between 0 and 255." << std::endl;
            exit(1); // Exit the program with an error code
        }
    }

    // Getter method to retrieve the color value
    int getValue() const {
        return value;
    }

    // Function to print the color value
    void print() const {
        std::cout << "Color value: " << value << std::endl;
    }
};

class Red : public Color {
public:
    // Constructor for the Red color
    Red(int val) : Color(val) {}
};

class Green : public Color {
public:
    // Constructor for the Green color
    Green(int val) : Color(val) {}
};

class Blue : public Color {
public:
    // Constructor for the Blue color
    Blue(int val) : Color(val) {}
};

int main() {
    // Create instances of Red, Green, and Blue colors with values
    Red red(255);
    Green green(128);
    Blue blue(0);

    // Display the color values
    red.print();   // Should print "Color value: 255"
    green.print(); // Should print "Color value: 128"
    blue.print();  // Should print "Color value: 0"

    return 0;
}
