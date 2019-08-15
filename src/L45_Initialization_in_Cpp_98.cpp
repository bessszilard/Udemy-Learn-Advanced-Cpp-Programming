//L45_Initialization_in_Cpp_98.cpp

#include<iostream>
using namespace std;

int main(){
    class C {
    public:
        string text;
        int id;
    };
    C c1 = {"Hello", 1};

    struct S {
        string text;
        int id;
    };
    S s1 = {"Hi", 2};

    struct {
        string text;
        int id;
    } r1 = {"simple", 3}, r2 = {"struct", 4};

    cout << c1.text << endl;
    cout << s1.text << endl;
    cout << r1.text << endl;
    cout << r2.text << endl;

    return 0;
}