// Add two distances in inch-feet by creating a class named 'AddDistance'.
#include<iostream>
using namespace std;
class AddDistance{
    int inches,feet;
    public:
    AddDistance():inches(0),feet(0){}
    AddDistance(int ft, int in) : feet(ft), inches(in) {}
    // void Set_Data(int i,int f){
    //     inches=i;
    //     feet=f;
    // }
    void Display_Data(){
        cout<<"Feet: "<<feet<<" Inches: "<<inches<<endl;
    }
    AddDistance operator+(AddDistance &obj){
        AddDistance result;
        result.feet=feet+obj.feet;
        result.inches=inches+obj.inches;
        if(result.inches>=12){
            result.feet+=result.inches/12;
            result.inches%=12;
        }
        return result;
    }
};
int main(){
    int feet1,inches1;
    cout<<"Enter Distance 1 in feet: ";
    cin>>feet1;
    cout<<"Enter Distance 1 in Inches: ";
    cin>>inches1;
    AddDistance d1(feet1,inches1);
    int feet2,inches2;
    cout<<"Enter Distance 2 in feet: ";
    cin>>feet2;
    cout<<"Enter Distance 2 in Inches: ";
    cin>>inches2;
    AddDistance d2(feet2,inches2);
    AddDistance sum=d1+d2;
    cout<<"The sum of Distances: "<<endl;
    d1.Display_Data();
    cout<<"+";
    d2.Display_Data();
    cout<<"=";
    sum.Display_Data();
    return 0;
}