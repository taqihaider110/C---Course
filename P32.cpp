// C++ program to overload the binary operator +
// This program adds two complex numbers
#include <iostream>
using namespace std;
class Complex
{
private:
    float real;
    float imag;

public:
    // Constructor to initialize real and imag to 0
    Complex() : real(0), imag(0) {}
    void input()
    {
        cout << "Enter real and imaginary parts respectively: ";
        cin >> real;
        cin >> imag;
    }
    // Overload the + operator
    Complex operator+(const Complex &obj)
    {
        Complex temp;
        temp.real = real + obj.real;
        temp.imag = imag + obj.imag;
        return temp;
    }
    void display()
    {
        cout << "The complex number is: " << real << " + " << imag << "i";
    }
};
int main()
{
    Complex c1, c2, c3;
    c1.input();
    c2.input();
    c3 = c1 + c2;
    c3.display();
    return 0;
}
