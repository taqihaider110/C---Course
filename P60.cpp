// Question: Define a C++ class Complex to represent complex 
// numbers (numbers in the form a + bi, where a and b are real numbers).
//  Overload the + operator to perform addition of complex numbers 
//  and the << operator to display complex numbers in a user-friendly format.
#include<iostream>
using namespace std;
class Complex{
    double real,imaginary;
    public:
    Complex():real(0.0),imaginary(0.0){}
    Complex(double a,double b):real(a),imaginary(b){}
    Complex(Complex &c){
        real=c.real;
        imaginary=c.imaginary;
    }
    // Complex sum(Complex c1){
    //     c1.real=real+c1.real;
    //     c1.imaginary=imaginary+c1.imaginary;
    //     return c1;
    // }
     Complex addComp(Complex C1, Complex C2)
    {
        // Creating temporary variable
        Complex temp;
  
        // Adding real part of
        // complex numbers
        temp.real = C1.real + C2.real;
  
        // Adding Imaginary part of
        // complex numbers
        temp.imaginary = (C1.imaginary + C2.imaginary);
  
        // Returning the sum
        return temp;
    }
    void show(){
        if(imaginary>0){
            cout<<real<<"+i"<<imaginary<<endl;
        }
        else{
            imaginary=-imaginary;
            cout<<real<<"-i"<<imaginary<<endl;   
        }
    }
};
int main(){
    Complex c1(5.0,7.0);
    Complex c2(3.0,5.0);
    Complex c3;
    // c3=c1.sum(c2);
    c3=c3.addComp(c1,c2);
    c3.show();
    return 0;
}