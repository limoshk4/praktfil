#include <iostream>
#include <string>
using namespace std;
class Fruit {
protected:
    string name;

public:
    Fruit(const string& n)
        : name(n) {}

    const string& getName() const {
        return name;
    }
};

class Apple : public Fruit {
public:
    Apple(const string& n)
        : Fruit(n) {}

    bool isRed() const {
        return name == "Red Apple";
    }
};

int main() {
    Fruit fruit("Fruit");
    Apple apple("Red Apple");

    cout << "Fruit: " << fruit.getName() << endl;
    cout << "Apple: " << apple.getName() << endl;

    if (apple.isRed()) {
        cout << "Red Apple." << endl;
    } else {
        cout << "No Red Apple." << endl;
    }

    return 0;
}
