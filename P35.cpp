#include <iostream>
using namespace std;
class Array
{
    int size;
    int *ptr;

public:
    Array(int s = 0) : size(s), ptr(NULL)
    {
        if (size > 0)
            ptr = new int[size];
        if (ptr == NULL)
            exit(1);
    }
    int &operator[](int in)
    {
        if (in >= size)
        {
            cout << "index " << in << " is out of bound" << endl;
            exit(1);
        }
        return ptr[in];
    }
    friend int dotproduct(Array, Array);
};
int dotproduct(Array a1, Array a2)
{
    if (a1.size = a2.size)
    {
        int temp = 0;
        for (int i = 0; i < a1.size; i++)
            temp += a1[i] * a2[i];
        return temp;
    }
    else
    {
        cout << "Size mismatch error" << endl;
        exit(1);
    }
}
int main()
{
    Array a1(5), a2(5);
    for (int i = 0; i < 5; i++)
    {
        a1[i] = i * 2;
        a2[i] = i + 3;
    }
    for (int i = 0; i < 5; i++)
        cout << a1[i] << endl;
    for (int i = 0; i < 5; i++)
        cout << a2[i] << endl;
    cout << dotproduct(a1, a2) << endl;
    return 0;
}