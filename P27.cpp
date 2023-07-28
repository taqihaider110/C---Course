#include<iostream>
using namespace std;
class example{
private:
int x;
public:
void set(int x){
(*this).x = x;
}
int get( ){
return x;
}
void printAddressAndValue( ){
cout << "The address is"<<this<<"and the value is"<<(*this).x<<endl; }
};
int main(){
    example c;
    c.set(5);
    c.get();
    c.printAddressAndValue();    
}