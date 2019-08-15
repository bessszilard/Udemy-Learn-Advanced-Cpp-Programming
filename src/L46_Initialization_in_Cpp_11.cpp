//L46_Initialization_in_Cpp_11.cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int v{5};

    string text {"Hello"};
    cout << text << endl;

    int v2[]{1, 2, 3};

    int *pInts = new int[3]{1, 4, 2};

    cout << pInts[2] << endl;

    int zeros[5] = {};
    cout << zeros[3] << endl << endl;

    vector<string> numbers{"one", "two", "three"};
    for(auto number_str : numbers) {
        cout << number_str << endl;
    }

    return 0;
}