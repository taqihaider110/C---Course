// Question: Write a C++ program that demonstrates multiple inheritance. Create three classes:
//  Vehicle, Engine, and Car. The Car class should inherit from both Vehicle and Engine.
//  Include relevant properties and methods in each class to demonstrate their relationships.
#include<iostream>
using namespace std;
class Vehicle{
    protected:
    string make;
    string model;
    public:
    Vehicle(string make,string model):make(make),model(model){}
    void start(){
        cout<<"The Vehicle: "<<make<<" is starting. "<<model<<endl;
    }
    void stop(){
        cout<<"The Vehicle: "<<make<<" is stoping. "<<model<<endl;
    }
};
class Engine {
    protected:
    int EngineCapacity;
    public:
    Engine(int EngineCapacity):EngineCapacity(EngineCapacity){}
    void startEngine(){
        cout<<"Engine with "<<EngineCapacity<<" is starting."<<endl;
    }
    void stopEngine(){
        cout<<"Engine with "<<EngineCapacity<<" is stoping."<<endl;
    }
};
class Car:public Vehicle, public Engine{
    public:
    Car(string make,string model, int capacity):Vehicle(make,model),Engine(capacity){}
    void drive(){
        cout<<"Car "<<make<<" "<<model<<" with "<<EngineCapacity<<" cc Engine is driving."<<endl;
    }
};
int main(){
    Car car1("Ford","F150",248); //create object of the derived class by passing parameters for base class constructor
    Car car("Ford","F150",2498); // Ford F150 has engine of size 24
    car.start();
    car.drive();
    
    return 0;
}