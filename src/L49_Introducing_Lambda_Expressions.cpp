//L49_Introducing_Lambda_Expressions.cpp
#include <iostream>
using namespace std;

void test(void (*testFunc)() ) {
    testFunc();
}

int main() {

    auto func1 = [](){cout << "hello" << endl; };

    func1();

    test(func1);
    test( [](){cout << "hello again" << endl; } );

    return 0;
}