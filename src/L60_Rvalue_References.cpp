//L60_Rvalue_References.cpp
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

void check(Test &lvaule) {
    cout << "This is an L value reference" << endl;
}

void check(Test &&rvalue) {
    cout << "This is a  R value reference" << endl;
}

int main(){
    Test new_test = getTest();

    cout << new_test << endl;
 
    int value1 = 7;
    int valueArray[]{1, 2};

    int *value2 = &value1;
    //int *value1 = &7

    Test *pTest1 = &new_test;
    // Test *pTest2 = &getTest();

    int *value3 = (valueArray + 1);//&(value1++);
    cout << endl << *value3 << endl;

    const int &value4 = 5;

    cout << value4 << endl;

    Test &lTest1  = new_test;
    Test &&rTest1 = getTest(); 

    check(lTest1);
    // check(&new_test);
    check(Test());
    check(getTest());


    return 0;
}
