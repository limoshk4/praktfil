#include <iostream>
#include <string>
using namespace std;

class Student {
protected:
    string name;
    int age;
    double averageGrade;

public:
    Student(const string& n, int a, double avg)
        : name(n), age(a), averageGrade(avg) {}

    bool isMedalStudent() const {
        return averageGrade >= 5;
    }
};

class MedalStudent : public Student {
public:
    MedalStudent(const string& n, int a, double avg)
        : Student(n, a, avg) {}

    void checkMedalStatus() const {
        if (isMedalStudent()) {
            cout << name << " otlichnik." << endl;
        } else {
            cout << name << " no otlichnik." << endl;
        }
    }
};

int main() {
    Student student1("Albert", 18, 5);
    Student student2("Kesha", 23, 4.0);

    if (student1.isMedalStudent()) {
        cout << "Albert-otlichnik." << endl;
    } else {
        cout << "Albert- no otlichnik." << endl;
    }

    if (student2.isMedalStudent()) {
        cout << "Kesha- otlichnik." << endl;
    } else {
        cout << "Kesha- no otlichnik." << endl;
    }

    return 0;
}
