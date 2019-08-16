//L53_The_Standard_Function_Type.cpp
#include <iostream>
#include <vector>
#include <functional>

using namespace std;

bool str_len_check_1(string str) {
    return str.size() == 1;
}

void testfunc(function<bool(string)>func) {
    string input_str = "a";
    cout << func(input_str) << endl;
}

class Check{
public:
    bool operator()(string str){
        return str.size() == 4;
    }
} check1;

int main() {
    int size = 5;

    vector<string> words = {"giraffe", "apple", "dog", "cat"};
    function<bool(string)> count_length = [](string s) { return s.size() == 3; };
    cout << count_length(words[2]) << endl;

    testfunc(count_length);

    // Test str_len_3_check;

    testfunc(check1);

    testfunc(str_len_check_1);

    return 0;
}