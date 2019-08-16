//L55_Delegating_Constructors.cpp
#include <iostream>
using namespace std;

class Parent {
private:
    int id{5};
    string name{"Mark"};
public:
    Parent() : Parent(2, "John") {
        cout << "Parent - no parameter constructor" << endl;
    }

    Parent(int id_, string name_ ) : id(id_), name(name_) {
        cout << "Parent - constructor with parameters" << endl;
    }
};

class Child : public Parent {
public:
    Child() {
        cout << "Child - No parameter constructor" << endl;
    }
};


int main() {
    Parent parent1;
    cout << endl;
    Child child1;

    return 0;
}