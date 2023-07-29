#include <iostream>
using namespace std;
class Demo{
private:
static int x;
public:
static void fun( ){
cout<<"value of X: " << x << endl;
x++;
}
};
//defining
int Demo::x=10;
int main( ){
Demo X;
X.fun( );
X.fun( );
return 0;
}
