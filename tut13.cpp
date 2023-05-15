#include<iostream>
using namespace std;
// int swap(int x,int y){
//     int temp=x;
//     x=y;
//     y=temp;
// }
//Call by reference using pointers
// int swap(int *x,int *y);
int swap_reference(int &a,int &b){
    int temp =a;
    a=b;
    b=temp;
    return 0;   
}
int main(){
    int x=5,y=6;
    cout<<"The value of x "<<x<<" The value of y "<<y<<endl;
    // swap(x,y);This will not swap a and b
    // swap(&x,&y);//This will swap a and b using pointer reference
    // cout<<"The value of x "<<x<<" The value of y "<<y<<endl;
    swap_reference(x,y);//This will swap a and b using reference variables
    cout<<"The value of x "<<x<<" The value of y "<<y<<endl;
    return 0;
}
// int swap(int *x,int *y){
//     int temp=*x;
//     *x=*y;
//     *y=temp;
// }