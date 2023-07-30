#include <iostream>
#include <conio.h>
using namespace std;
template <class t1, class t2>
class sample
{
    t1 a;
    t2 b;

public:
    void getdata()
    {
cout<< "Enter value for a and b" << endl;
cin >> a >> b;
    }
    void display()
    {
cout << "Value of a :" << a << endl;
cout << "Value of b :" << b << endl;
    }
};
int main()
{
    sample<int, int> s1;
    sample<float, float> s2;
    cout << "Two integer data" << endl;
    s1.getdata();
    s1.display();
    cout << "Two float data" << endl;
    s2.getdata();
    s2.display();
    return 0;
}
