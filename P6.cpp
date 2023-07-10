// Print the average of three numbers entered by the user by creating
//  a class named 'Average' having a function to calculate and print
//   the average without creating any object of the Average class.
#include<iostream>
using namespace std;
class Average{
    private:
    int a,b,c;
    public:
    Average(int a,int b,int c):a(a),b(b),c(c){}
    static int calculateandPrint(double a,double b,double c){
        double avg=(a+b+c)/3;
        cout<<"The Average of the three numbers is: "<<avg<<endl;
    }
};
int main(){
    double a,b,c;
    cout<<"Enter the value of a:"<<endl;
    cin>>a;
    cout<<"Enter the value of b:"<<endl;
    cin>>b;
    cout<<"Enter the value of c:"<<endl;
    cin>>c;
    Average::calculateandPrint(a,b,c);
    return 0;
}