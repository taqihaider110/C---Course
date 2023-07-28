#include <iostream>
#include <cstring>

class ShallowCopyClass {
public:
    char* data;

    // Constructor
    ShallowCopyClass(const char* str) {
        data = new char[strlen(str) + 1];
        strcpy(data, str);
    }

    // Shallow copy constructor
    ShallowCopyClass(const ShallowCopyClass& other) {
        data = other.data; // Shallow copy of the 'data' pointer
    }

    // Destructor
    ~ShallowCopyClass() {
        delete[] data;
    }
};

int main() {
    ShallowCopyClass original("Hello");
    ShallowCopyClass copied = original; // Shallow copy

    // Output: Hello
    std::cout << original.data << std::endl;
    // Output: Hello
    std::cout << copied.data << std::endl;

    // Modifying the data through one object will affect the other
    strcpy(original.data, "World");

    // Output: World
    std::cout << original.data << std::endl;
    // Output: World (affected by the shallow copy)
    std::cout << copied.data << std::endl;

    return 0;
}
