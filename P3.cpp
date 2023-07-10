// Write a program to print the area and perimeter of a triangle 
// having sides of 3, 4 and 5 units by creating a class named 'Triangle'
//  with a function to print the area and perimeter.
#include<iostream>
#include<math.h>
using namespace std;
class Triangle{
    private:
    int a,b,c;
    public:
    Triangle(int a,int b,int c):a(a),b(b),c(c){}
    void perimeterofTriangle(){
        int P;
        P=a+b+c;
        cout<<"The Perimeter of a Triangle: "<<P<<endl;
    }
    void AreaofTriangle(){
        int s;
        float Area;
        s=a+b+c/2;
        Area=sqrt(s*(s-a)*(s-b)*(s-c));
        cout<<"The Area of a Triangle is: "<<Area<<endl;
    }
};
int main(){
    Triangle t1(3,4,5);
    t1.perimeterofTriangle();
    t1.AreaofTriangle();
    return 0;
}