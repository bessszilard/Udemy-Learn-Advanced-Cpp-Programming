//L38_Functons.cpp
#include <iostream>
using namespace std;

struct Test {
    virtual bool operator()(string text) = 0;

    virtual ~Test(){}
};

struct MatchTest : public Test {
    virtual bool operator()(string text) {
        return text == "lion";
    }
};

bool stringTest(string text, Test &test ) {
    return (test(text));
}

int main() {
    string text = "lions";
    MatchTest m;

    cout << stringTest(text, m) << endl;

    return 0;
}