// Write a program to print the area of two rectangles having sides (4,5) and (5,8) 
// respectively by creating a class named 'Rectangle' with a function named 'Area' 
// which returns the area. Length and breadth are passed as parameters to its constructor.
#include<iostream>
using namespace std;
class Rectangle{
    private:
    int L,B;
    public:
    Rectangle(int l,int b):L(l),B(b){}
    void Print_Area(){
        double Area=L*B;
        cout<<"The Area of Rectange is: "<<Area<<endl;
    }
};
int main(){
    Rectangle r1(4,5);
    r1.Print_Area();
    Rectangle r2(5,8);
    r2.Print_Area();
    return 0;
}