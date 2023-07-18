// Write a program and input two integers in main and pass them to default constructor of the class.
// Show the result of the additon of two numbers.
#include<iostream>
using namespace std;
class add{
    private:
    int a,b;
    public:
    add(int x,int y){
        a=x;
        b=y;
    }
    int addition(int x,int y){
        return x+y;
    }
};
int main(){
    int x,y;
    cout<<"Enter two numbers: ";
    cin>>x>>y;
    add obj(x,y);
    cout<<"The sum of Two numbers is: "<<obj.addition(x,y);
    return 0;
}