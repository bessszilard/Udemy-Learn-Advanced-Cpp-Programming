//L62_Move_Assignment_Operator.cpp
#include <iostream>
#include <vector>
#include <memory.h>
using namespace std;

class Test {
private:
    const int SIZE = 100;
    int *_pBuffer{nullptr};
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

    Test(Test &&other) {
        cout << "Move constructor" << endl;
        _pBuffer = other._pBuffer;  // we don't allocate more memory
        other._pBuffer = nullptr;
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

    Test &operator=(Test &&other) {
        cout << "Move assignment operator" << endl;

        delete [] _pBuffer ;
        _pBuffer = other._pBuffer;
        other._pBuffer = nullptr;
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

    vector<Test> vec;
    vec.push_back(Test());   

    Test test1;
    test1 = getTest();

    return 0;
}
