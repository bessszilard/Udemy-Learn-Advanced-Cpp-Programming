//L34_Function_pointers.cpp
#include <iostream>
using namespace std;

void print() {
    cout << "Hello" << endl;
}

void printInt(int value) {
    cout << "Value: " << value << endl;
}

int main() {
    void (*Test)() = print;
    void (*TestInt)(int) = printInt;
    // Test = print;

    Test();
    TestInt(5);

    return 0;
}