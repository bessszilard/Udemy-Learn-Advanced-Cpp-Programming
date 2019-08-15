//L50_Lambda_Parameters_and_Return_Types.cpp
#include <iostream>
using namespace std;

void runDivider(double (*fDiv)(double a, double b)) {
    cout << fDiv(1, 42) << endl;
}

int main() {

    auto fDivider = [](double a, double b) -> double { 
        if (b == 0)
            return 0;
        return a / b;
     };

    cout << fDivider(3, 1.2) << endl;

    runDivider(fDivider);

    return 0;
}