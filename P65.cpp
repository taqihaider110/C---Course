// Program to Inherit Color Classes and Create New Shade
#include <iostream>
#include <string>

class Color {
protected:
    std::string name;

public:
    Color(const std::string& colorName) : name(colorName) {}
};

class Red : public Color {
public:
    Red() : Color("Red") {}
};

class Green : public Color {
public:
    Green() : Color("Green") {}
};

class Blue : public Color {
public:
    Blue() : Color("Blue") {}
};

class NewShade : public Red, public Green {
public:
    NewShade() : Red(), Green() {}

    void displayShade() {
        std::cout << "New Shade: " << Red::name << " + " << Green::name << std::endl;
    }
};

int main() {
    NewShade shade;
    shade.displayShade();

    return 0;
}
