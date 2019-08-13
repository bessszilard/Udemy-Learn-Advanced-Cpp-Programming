//L37_Absract_classes_and_pure_virtal_functions.cpp
#include <iostream>
using namespace std;

// abstract class - it contains only virtual functions
class Animal {
public:
    virtual void speak() = 0;   // force to implement
    virtual void run() = 0;     // force to implement
};

class Dog : public Animal {
public:
    virtual void speak() {
        cout << "Woof!" << endl;
    }
};

class Labrador : public Dog {
public:
    void run() {
        cout << "Labrador is running" << endl;
    }
};

void animal_run(Animal *a) {
    a->run();
}

int main() {
    Animal *animals[5];

    Labrador lab;
    lab.run();
    lab.speak();
    
    animals[0] = &lab;
    animals[0]->speak();

    animal_run(animals[0]);
    return 0;
}
