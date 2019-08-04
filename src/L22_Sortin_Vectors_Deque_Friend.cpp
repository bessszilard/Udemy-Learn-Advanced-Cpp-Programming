//L22_Sortin_Vectors_Deque_Friend
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Test {
    string name;
    int id;

public:
    Test(string name_, int id_): name(name_), id(id_) {}

    void print() {
        cout << id << ": " << name << endl;
    }

    friend bool compare(Test &a, Test &b);
};

bool compare(Test &a, Test &b) {
    return a.id < b.id;
}

int main() {
    vector <Test> tests;

    tests.push_back(Test("Mike", 16));
    tests.push_back(Test("Joe",  41));
    tests.push_back(Test("Jean", 35));

    sort(tests.begin(), tests.end(), compare);

    for (int i=0; i<tests.size(); i++) {
        tests[i].print();
    }

    return 0;
}