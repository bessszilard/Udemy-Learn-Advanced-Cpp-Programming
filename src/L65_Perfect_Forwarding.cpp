//L65_Perfect_Forwarding.cpp
#include <iostream>
using namespace std;

class Test {

};

template<typename T>
void call(T &&ref) {
    check(forward<T>(ref));     // forward does the same as static_cast
}

void check(Test &ref) {
    cout << "lvalue" << endl;
} 

void check(Test &&ref) {
    cout << "rvalue" << endl;
}

int main() {
    Test test1;
    call(Test());

    return 0;
}