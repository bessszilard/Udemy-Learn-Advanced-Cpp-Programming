//L48_Object_Initialization_Default_and_Delete.cpp

#include <iostream>
using namespace std;

class Test {
public:
    int id{21};
    string name{"John"};

public:
    Test() {};
    Test(int id_) : id(id_) {}
    Test(int id_, string name_) : id(id_), name(name_) {}

};

int main() {
    Test test1;

    cout << test1.id << ": " << test1.name << endl;

    return 0;
}