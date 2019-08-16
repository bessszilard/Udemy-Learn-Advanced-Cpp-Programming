//L54_Mutable_Lambdas.cpp
#include <iostream>
using namespace std;

int main() {
    int var1 = 5;

    [var1]() mutable {
        var1 = 1;
        cout << var1 << endl;
    }();
    cout << var1 << endl;
    
    return 0;
}