#include <iostream>
#include <cstdlib>
using namespace std;

class Array
{
    int size;
    int *ptr;

public:
    Array(int s = 0) : size(s), ptr(NULL)
    {
        if (size > 0)
            ptr = new int[size]();
        if (ptr == NULL)
            exit(1);
    }

    Array(const Array &ob)
    {
        if (ob.size > 0)
        {
            size = ob.size;
            ptr = new int[size]();
            if (ptr == NULL)
                exit(1);
            for (int i = 0; i < size; i++)
            {
                ptr[i] = ob.ptr[i];
            }
        }
        else
            exit(1);
    }

    // Assignment operator (operator=) overload
    Array &operator=(const Array &ob)
    {
        if (this == &ob)
            return *this;

        if (ptr != NULL)
            delete[] ptr;

        if (ob.size > 0)
        {
            size = ob.size;
            ptr = new int[size]();
            if (ptr == NULL)
                exit(1);
            for (int i = 0; i < size; i++)
            {
                ptr[i] = ob.ptr[i];
            }
        }
        else
            exit(1);

        return *this;
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

    Array operator+(const Array &ob) const
    {
        if (size == ob.size)
        {
            Array temp(size);
            for (int i = 0; i < size; i++)
                temp[i] = ptr[i] + ob.ptr[i];
            return temp;
        }
        else
        {
            cout << "The size of arrays does not match!" << endl;
            exit(1);
        }
    }

    int operator*(const Array &ob) const
    {
        if (size == ob.size)
        {
            int temp = 0;
            for (int i = 0; i < size; i++)
                temp += ptr[i] * ob.ptr[i];
            return temp;
        }
        else
        {
            cout << "The size of arrays does not match!" << endl;
            exit(1);
        }
    }

    ~Array()
    {
        delete[] ptr;
    }
};

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

    Array a3(a1);
    Array a4 = a1 + a2;
    for (int i = 0; i < 5; i++)
        cout << a4[i] << "\t";
    cout << endl;

    cout << a1 * a2 << endl;
}
