//L68_Unique_Pointers.cpp
#include <iostream>
#include <memory>
using namespace std;
class Test {
public:
    Test() {
        cout << "Created" << endl;
    }
    ~Test() {
        cout << "Deleted" << endl;
    }
    void speak() {
        cout << "Hello" << endl;
    }
};

class Temp {
private:
    unique_ptr<Test[]>_pTest;   
public:
    // uniqure pointer will be deleted automatically
    Temp() : _pTest(new Test[2]) {
    
    }

};

int main() {
    // unique_ptr<Test> test1(new Test);
    // test1->speak();

    Temp temp;

    cout << "Finished" << endl;
    return 0;
}