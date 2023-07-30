#include <iostream>
#include <set>
using namespace std;
int main()
{
    set<char> a;
    set<char>::iterator p;
    a.insert('G');
    a.insert('F');
    a.insert('G');
    p = a.begin();
    while (p != a.end())
    {
        cout << *p << ' ';
        p++;
    }
    cout << '\n';
    return 0;
}