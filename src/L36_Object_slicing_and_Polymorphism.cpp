//L36_Object_slicing_and_Polymorphism.cpp
#include <iostream>
using namespace std;

class Parent{
private:
    int one;
public:
    Parent(): one(0) {

    }

    Parent(const Parent &other) : one(0) {
        cout << "copy agent" << endl;
    }

    virtual void print() {
        cout << "parent" << endl;
    }
    virtual ~Parent() {

    }
};

class Child : public Parent {
private:
    int two;

public:
    Child(): two(1) {

    }
    
    void print() {
        cout << "child" << endl;
    }
};

int main() {
    Child c1;
    Parent &p1 = c1;

    p1.print();

    Parent p2 = Child();
    p2.print();

    return 0;
}
