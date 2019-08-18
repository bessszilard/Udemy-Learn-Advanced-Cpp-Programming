//L66_Bind.cpp
#include <iostream>
#include <functional>
using namespace std;
using namespace placeholders;

int add(int a, int b, int c) {
    cout << a << "\t" << b << "\t"<< c << "\t->\t";
    return a + b + c;
}

int add_2(function<int(int, int)>adder) {
    return adder(77, 13);
}

class Test{
public:
    int adder(int a, int b, int c) {
        cout << a << "\t" << b << "\t"<< c << "\t->\t";
        return a + b + c;
    }
    static int static_adder(int a, int b, int c) {
        cout << a << "\t" << b << "\t"<< c << "\t->\t";
        return a + b + c;
    }
};

int main() {
    auto calc = bind(add, 1, 2, 3);
    cout <<  calc() << endl;

    auto calc2 = bind(add, _2, _3, _1);
    cout << calc2(10, 20, 30) << endl;

    auto calc3 = bind(add, _2, 100, _1);
    cout << calc3(10, 25) << endl;

    cout << add_2(calc3)  << endl;  // add binded object as a - function pointer

    Test test_obj;
    auto adder_in_class = bind(&Test::adder, test_obj, 1, 22, 3);
    cout << adder_in_class() << endl;

    auto static_adder_in_class = bind(&Test::static_adder, 11, 22, 3);
    cout << static_adder_in_class() << endl;

    return 0;
}