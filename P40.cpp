#include <iostream>
using namespace std;

template <typename T>
void swapValues(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 5, y = 10;
    cout << "Before swapping: x = " << x << ", y = " << y << endl;
    swapValues(x, y); // Swaps the values of x and y
    cout << "After swapping: x = " << x << ", y = " << y << endl;

    double a = 3.14, b = 1.618;
    cout << "Before swapping: a = " << a << ", b = " << b << endl;
    swapValues(a, b); // Swaps the values of a and b
    cout << "After swapping: a = " << a << ", b = " << b << endl;

    return 0;
}
