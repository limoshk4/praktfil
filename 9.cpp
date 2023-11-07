#include <iostream>
using namespace std;
class Vehicle {
protected:
    double maxSpeed;

public:
    Vehicle(double maxSpeed)
        : maxSpeed(maxSpeed) {}

    double getMaxSpeed() const {
        return maxSpeed;
    }
};

class Car : public Vehicle {
public:
    Car(double maxSpeed)
        : Vehicle(maxSpeed) {}

    bool isSportsCar() const {
        return maxSpeed > 200.0;
    }
};

int main() {
    Car obCar(150.0);
    Car sportsCar(220.0);

    cout << "Max speed obCar: " << obCar.getMaxSpeed() << " км/ч" << endl;
    cout << "Max speed SportCar: " << sportsCar.getMaxSpeed() << " км/ч" << endl;

    if (sportsCar.isSportsCar()) {
        cout << "SportCar." << endl;
    } else {
        cout << "No SpartCar." << endl;
    }

    return 0;
}
