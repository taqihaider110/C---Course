#include <iostream>

class Animal {
public:
    virtual void makeSound() {
        std::cout << "Some generic animal sound" << std::endl;
    }
};

class Dog : public Animal {
public:
    void makeSound() override {
        std::cout << "Woof! Woof!" << std::endl;
    }
};

int main() {
    Animal* animal = new Dog();
    
    // Dynamic binding - the appropriate makeSound() is called at runtime
    animal->makeSound(); // Outputs "Woof! Woof!"
    
    delete animal;
    return 0;
}
