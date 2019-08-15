//L51_Lambda_Capture_Expressions.cpp
#include <iostream>
using namespace std;

int main() {
    int one = 1;
    int two = 2;
    int three = 3;

    // Capture only one by value    
    [one](){ cout << one << endl; }();

    // Capture only one and two by value
    [one, two](){ cout << two << endl; }();

    // Default capture very local variable by value
    [=](){ cout << two << ",\t" << three << endl; }();

    // Default capture every local variable by value but one by reference
    [=, &one](){ one = 4; cout << one << ",\t" << two << ",\t" << three << endl; }();

    // Default capture every local variable as a reference
    [&](){ two = 22; cout << one << ",\t"<< two << ",\t" << three << endl; }();

    // Default capture all local variables by reference, but two and three by value
    [&, two, three ](){ one = 11; cout << one << ",\t"<< two << ",\t" << three << endl; }();
   
    return 0;
}