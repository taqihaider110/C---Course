#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> myvector;
    myvector = {1, 2, 3, 4, 5};
    for (const int &i : myvector)
    {
        cout << i << "  ";
    }
    myvector.push_back(6);
    myvector.push_back(7);
    cout << endl
         << "After pushing some new elements the vector: " << endl;
    for (const int &i : myvector)
    {
        cout << i << "  ";
    }
    cout << endl
         << " after using the at() function we excessed the element like we do in Array: " << endl;
    cout << "At 6th index the Element is =  " << myvector.at(5) << endl;
    cout << "At 7th index the Element is =  " << myvector.at(6) << endl;
    cout << endl
         << "Using same at() function we can update the element at any index! " << endl;
    myvector.at(6) = 34;
    myvector.at(5) = 324;
    for (const int &i : myvector)
    {
        cout << i << "  ";
    }
    cout << endl
         << "after using popback () function: " << endl;
    myvector.pop_back();
    for (const int &i : myvector)
    {
        cout << i << "  ";
    }
    cout << endl
         << " this size() tells the size of vector =  " << myvector.size() << endl;
    cout << endl
         << " this clear() clears the vector=  " << endl;
    myvector.clear();
    for (const int &i : myvector)
    {
        cout << i << "  ";
    }
    cout << endl
         << "we are again filling the vector for learning more functions: " << endl;
    myvector = {1, 2, 3, 4, 5};
    cout << endl
         << " this front() tells about the front element of vector=  " << myvector.front() << endl;
    cout << endl
         << " this back() tells about the last element of the vector =  " << myvector.back() << endl;
    cout << endl
         << " this empty() tells weather the vector is empty or not by returning 1 or 0: =  " << myvector.empty() << endl;
    cout << endl
         << " this capacity() tells over allsize of vector=" << myvector.capacity() << endl;

    cout << endl
         << "Now we will use vector iterator!  " << endl;
    cout << endl
         << "begin() points the iterator that we created and assighned as 'vector<int>::iterator itr = myvector.begin();' " << endl;
    vector<int>::iterator itr = myvector.begin();
    cout << endl
         << "the element being pointed by begin()=  " << *itr << endl;
    cout << "now if we will increment the iterator as itr++ the pointer will point to next and so on:  " << endl;
    itr++;
    cout << endl
         << "the next element being pointed by iterator =  " << *itr << endl;
    cout << "if we want to point iterator to the last element we will do like 'itr=myvector.end()-1': " << endl;
    itr = myvector.end() - 1;
    cout << "the Last element =" << *itr << endl;
}