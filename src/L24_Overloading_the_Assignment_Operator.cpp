//L24_Overloading_the_Assignment_Operator
#include <iostream>

using namespace std;

class Test {
private:
    int id;
    string name;

public:
    Test() : id(0), name("") {}

    Test(int id_, string name_) : id(id_), name(name_) {}

    Test(const Test &other) {
        cout << "Initialization constructor called" << endl;
        id = other.id;
        name = other.name;
    }

    void print() const {
        cout << id << ": " << name << endl;
    }

    const Test &operator=(const Test &other) {
        cout << "Copy operator called" << endl;
        id = other.id;
        name = other.name;
        return *this;
    }

};


int main() {
    Test test1 = Test(1, "Almas");
    test1.print();
    
    Test test2;
    test2 = test1;      // "=" operator has 2 argument test2 and test1
    test2.print();
    
    Test test3 = test1;
    test3.print();

    Test test4;
    test4.operator=(test1);
    test4.print();
    return 0;
}