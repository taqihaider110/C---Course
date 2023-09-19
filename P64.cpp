// write program for relationship between vehicle,  car, racing, Ferrari 
#include <iostream>
#include <string>

class Vehicle {
protected:
    std::string make;
    std::string model;

public:
    Vehicle(const std::string& make, const std::string& model)
        : make(make), model(model) {}

    void start() {
        std::cout << "Vehicle " << make << " " << model << " is starting." << std::endl;
    }

    void stop() {
        std::cout << "Vehicle " << make << " " << model << " is stopping." << std::endl;
    }
};

class Car : public Vehicle {
public:
    Car(const std::string& make, const std::string& model)
        : Vehicle(make, model) {}

    void accelerate() {
        std::cout << "Car " << make << " " << model << " is accelerating." << std::endl;
    }

    void brake() {
        std::cout << "Car " << make << " " << model << " is braking." << std::endl;
    }
};

class RacingCar : public Car {
public:
    RacingCar(const std::string& make, const std::string& model)
        : Car(make, model) {}

    void race() {
        std::cout << "Racing car " << make << " " << model << " is racing at top speed!" << std::endl;
    }
};

class Ferrari : public RacingCar {
public:
    Ferrari(const std::string& model)
        : RacingCar("Ferrari", model) {}

    void showOff() {
        std::cout << "Look at my Ferrari " << model << "! It's amazing!" << std::endl;
    }
};

int main() {
    Ferrari myFerrari("SF90 Stradale");

    myFerrari.start();
    myFerrari.accelerate();
    myFerrari.race();
    myFerrari.showOff();
    myFerrari.stop();

    return 0;
}
