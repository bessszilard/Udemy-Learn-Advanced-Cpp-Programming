// L33_Template_Classes_and_Type_interference.cpp
#include <iostream>
using namespace std;

template<class T>
void print(T n) {
    cout << "Template print:\t" << n << endl;
}

void print(int n) {
    cout << "Normal print:\t" << n << endl;    
}

template<class T>
void show() {
    cout << T() << endl;
}

int main() {
    print("Hello");
    print<int>(5);

    print(6);

    show<int>();

    return 0;
}