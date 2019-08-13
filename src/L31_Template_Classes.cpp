// L31_Template_Classes.cpp
#include <iostream>
using namespace std;

template<class T>
class Test {
private:
    T obj;

public:
    Test(T obj) : obj(obj) {}

   void print() {
        cout << obj << endl;
    }
};

int main() {
    Test<string> test1("Hello");

    test1.print();

    return 0;
}