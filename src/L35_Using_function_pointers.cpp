//L35_Using_function_pointers.cpp
#include <iostream>
#include <vector>
using namespace std;

bool match(string test) {
    return test.size() == 3;
}

int countString(vector<string> numbers, bool (*match)(string)) {
    int counter = 0;
    for (size_t i = 0; i < numbers.size(); ++i) {
        if (match(numbers[i]))
            counter++;
    }
    return counter;
}


int main() {
    vector<string> numbers;
    numbers.push_back("one");
    numbers.push_back("two");
    numbers.push_back("three");
    numbers.push_back("four");
    numbers.push_back("five");
    numbers.push_back("six");
    numbers.push_back("one");
    numbers.push_back("two");
    
    cout << countString(numbers, match) << endl;
    return 0;
}