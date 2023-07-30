#include<iostream>
using namespace std;
#define n 20
class Queue{
    int *arr;
    int front;
    int back;
    public:
    Queue(){
        arr=new int[n];
        front =-1;
        back=-1;
    }
    void push(int x){
        if(back==n-1){
            cout<<"Queue overflow"<<endl;
            return;
        }
        back++;
        arr[back]=x;
        if(front==-1){
            front++;
        }
    }
    void pop(){
        if(front==-1||front>back){
            cout<<"No elements in queue"<<endl;
            return;
        }
    front++;
    }
    int peek(){
        if(front==-1||front>back){
            cout<<"No elements in queue"<<endl;
            return -1;
        }
        return arr[front];
    }
    bool empty(){
        if(front==-1||front>back){
            cout<<"No elements in queue"<<endl;
            return true;
        }
        else{
            return false;
        }
    }
};
int main(){
    Queue kyu;
    kyu.push(5);
    kyu.push(8);
    kyu.push(3);
    cout<<kyu.peek()<<endl;
    kyu.pop();
    kyu.pop();
    cout<<kyu.peek()<<endl;
    kyu.pop();
    cout<<kyu.empty();
    return 0;
}