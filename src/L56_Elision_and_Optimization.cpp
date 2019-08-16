//L56_Elision_and_Optimization.cpp
#include <iostream>
using namespace std;

class Test {
private:
    int x;
public:
    Test() {
        cout << "constructor" << endl;
    };
    Test(int x_) {
        cout << "parametrized constructor" << endl;
    }
    ~Test() {
        cout << "destructor" << endl;
    }

    // Test &operator=(const Test &other) {
    //     cout << "copy constructor" << endl;
    //     return *this;
    // }

    friend ostream &operator<<(ostream &out, Test &test);
};

ostream &operator<<(ostream &out, Test &test) {
    return out << "Hello from << operator";
}

Test getTest() {
    return Test();
}

int main(){
    Test new_test = getTest();
    cout << new_test << endl;
    return 0;
}
