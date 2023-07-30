#include <iostream>
using namespace std;
template <typename T1>
T1 Max (T1 a, T1 b){
return a < b? b : a;
}
int main()
{
cout << "Max integer are:" << Max(22, 2) << endl;
cout << "Max float are:" << Max (3.9, 22.8) << endl;
return 0;
}