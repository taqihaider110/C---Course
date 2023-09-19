// Question: Design a C++ class Math with a static method square that 
// calculates the square of an integer. Create a client program 
// that uses this static method to find the squares of multiple numbers.
#include <iostream>

class Math {
public:
    // Static method to calculate the square of an integer
    static int square(int x) {
        return x * x;
    }
};

int main() {
    int num = 5;
    int squared = Math::square(num); // Calling the static method using the class name

    std::cout << "The square of " << num << " is: " << squared << std::endl;

    return 0;
}
