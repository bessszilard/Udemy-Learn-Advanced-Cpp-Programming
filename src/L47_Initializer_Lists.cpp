//L47_Initializer_Lists.cpp
#include <iostream>
#include <vector>
#include <initializer_list>
using namespace std;

class Test {
public:
    Test(initializer_list<string> texts) {
        for(auto value : texts) {
            cout << value << endl;
        }
    }

    void print(initializer_list<string> texts) {
        for(auto value : texts) {
            cout << value << endl;
        }
    }
};

int main() {
    vector<int> vInts = {1, 3, 4, 5, 6};

    Test test1{"apple", "banana", "girafe"};
    cout << endl;

    

    return 0;
}