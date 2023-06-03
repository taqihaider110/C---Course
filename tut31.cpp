#include<iostream>
#include<cmath>
using namespace std;
class Point{
    int x,y;
    public:
    friend int distance_formula(Point,Point);
    Point(int a,int b):x(a),y(b){}
    void display_point(){
        cout<<"The point is ("<<x<<" , "<<y<<")"<<endl;
    }
};
int distance_formula(Point p1,Point p2){
    int x_diff=(p2.x-p1.x);
    int y_diff=(p2.y-p1.y);
    int diff=sqrt(pow(x_diff,2)+pow(y_diff,2));
    cout<<"The difference is "<<diff<<" units."<<endl;
    return diff;
}
int main(){
    Point p1(5,6);
    p1.display_point();
    Point p2(7,6);
    p2.display_point();
    distance_formula(p1,p2);
    return 0;
}