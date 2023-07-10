// Write a program to print the area of a rectangle by creating a class named 'Area'
//  having two functions. First function named as 'setDim' takes the length and breadth 
//  of the rectangle as parameters and the second function named as 'getArea' returns
//   the area of the rectangle. Length and breadth of the rectangle are entered through keyboard.
#include<iostream>
using namespace std;
class Area{
    private:
    int Length,Breadth;
    public:
    Area(){}
    void setDim(int L,int B){
        Length=L;
        Breadth=B;
    }
    void getArea(){
        cout<<"The Area of Triangle is: "<<Length*Breadth<<endl;
    }
};
int main(){
    Area a1;
    a1.setDim(5,6);
    a1.getArea();
    return 0;
}