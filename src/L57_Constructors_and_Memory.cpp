//L57_Constructors_and_Memory.cpp
#include <iostream>
#include <memory.h>
using namespace std;

class Test {
private:
    const int SIZE = 100;
    int *_pBuffer;
public:
    Test() {
        cout << "constructor" << endl;
        _pBuffer = new int[SIZE]{};
    };
    Test(int x_) {
        cout << "parametrized constructor" << endl;
        _pBuffer = new int[SIZE]{};
    }
    Test(const Test &other) {
        cout << "copy constructor" << endl;
        _pBuffer = new int[SIZE]{};
        memcpy(_pBuffer, other._pBuffer, sizeof(int) * SIZE);
    }

    ~Test() {
        cout << "destructor\t" << _pBuffer << endl;
        delete[] _pBuffer;
    }

    Test &operator=(const Test &other) {
        cout << "equal sign overloading" << endl;
        _pBuffer = new int[SIZE]{};
        memcpy(_pBuffer, other._pBuffer, sizeof(int) * SIZE);
        return *this;
    }

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
