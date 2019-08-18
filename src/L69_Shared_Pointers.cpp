//L69_Shared_Pointers.cpp
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

int main() {
    shared_ptr<Test> pTest2(nullptr);
    {
    shared_ptr<Test> pTest1 = make_shared<Test>();
    pTest2 = pTest1;    // shared pointer will only deleted if the last object which points there is deleted.
    }
    cout << "Finished" << endl;
    return 0;
}