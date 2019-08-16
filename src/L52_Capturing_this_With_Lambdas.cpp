//L52_Capturing_this_With_Lambdas.cpp
#include <iostream>
using namespace std;

class Test {
private:
    int one{1};
    int two{2};

public:
    void runTest() {
        int three{3};
        int four{4};

        // auto pLambda = [this, three, four](){    // okay
        // auto pLambda = [=](){    // add every variable by value
        // auto pLambda = [=, this](){    // not okay
        auto pLambda = [&, this](){       // add every variable by reference
            one = 111;
            two = 202;
            cout << one   << "\t" << two << endl;
            cout << three << "\t" << four << endl;
        };
        pLambda();
    }

};

int main() {
    Test test1;

    test1.runTest();

    return 0;
}