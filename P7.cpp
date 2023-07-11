// Print the sum, difference and product of two complex numbers by creating a class named 'Complex'
//  with separate functions for each operation whose real and imaginary parts are entered by the user.
#include<iostream>
using namespace std;
class Complex{
    private:
    double real,img;
    public:
    Complex():real(0.0),img(0.0){}
    Complex(double r,double i):real(r),img(i){}
    Complex add(Complex other){
        Complex sum;
        sum.real=real+other.real;
        sum.img=img+other.img;
        return sum;
    }
    Complex sub(Complex other){
        Complex diff;
        diff.real=real-other.real;
        diff.img=img-other.img;
        return diff;
    }  
    Complex mul(Complex other){
        Complex prod;
        prod.real=real*other.real-img*other.img;
        prod.img=real*other.img+img*other.real;
        return prod;
    }
    void display(){
        cout<<real<<" + "<<img<<"i"<<endl;
    }
};
int main(){
    Complex c1(1,2),c2(3,4);
    Complex sum=c1.add(c2);
    Complex diff=c1.sub(c2);
    Complex prod=c1.mul(c2);
    cout<<"Sum of two complex numbers is: ";
    sum.display();
    cout<<"Difference of two complex numbers is: ";
    diff.display();
    cout<<"Product of two complex numbers is: ";
    prod.display();
    return 0;
}