#include <iostream>
#include <cstring>

class DeepCopyClass {
public:
    char* data;

    // Constructor
    DeepCopyClass(const char* str) {
        data = new char[strlen(str) + 1];
        strcpy(data, str);
    }

    // Deep copy constructor
    DeepCopyClass(const DeepCopyClass& other) {
        data = new char[strlen(other.data) + 1];
        strcpy(data, other.data); // Deep copy of the 'data' member
    }

    // Destructor
    ~DeepCopyClass() {
        delete[] data;
    }
};

int main() {
    DeepCopyClass original("Hello");
    DeepCopyClass copied = original; // Deep copy

    // Output: Hello
    std::cout << original.data << std::endl;
    // Output: Hello
    std::cout << copied.data << std::endl;

    // Modifying the data through one object will not affect the other
    strcpy(original.data, "World");

    // Output: World
    std::cout << original.data << std::endl;
    // Output: Hello (not affected by the deep copy)
    std::cout << copied.data << std::endl;

    return 0;
}
