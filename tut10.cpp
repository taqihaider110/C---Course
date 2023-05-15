// #include<iostream>
// using namespace std;
// int main(){
//     //Arrays
//     int arr[4];
//     int i;
//     for (i= 0; i < 4; i++)
//     {
//         cout<<"Enter the value at "<<i<<" index"<<endl;
//         cin>>arr[i];
//     }
//     for (i = 0; i < 4; i++)
//     {
//         cout<<"The value at "<<i<<" is "<<arr[i]<<endl;
//     }
//     //Pointers and Arrays
//     int *p=arr;
//     cout<<"The value at mark[0] is "<<*p<<endl;
//     cout<<"The value at mark[1] is "<<*(p+1)<<endl;
//     cout<<"The value at mark[2] is "<<*(p+2)<<endl;
//     cout<<"The value at mark[3] is "<<*(p+3)<<endl;
    
    
//     return 0;
// }
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int i,n;
    int arr[n];
    cout<<"Input n";
    cin>>n;
    for(i=1;i<=n;i++){
        cin>>arr[i];
    }
    for(i=(n+i);i<=1;i--){
        cout<<arr[i]<<" ";
    }
      
    return 0;
}
