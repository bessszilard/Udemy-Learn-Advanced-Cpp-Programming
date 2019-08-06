#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<double> numbers;

    cout << numbers.size() << "\t" << numbers.capacity() << endl;
    int capacity = numbers.capacity();
    for (int i = 0; i < 30000; ++i) {
        if (capacity != numbers.capacity()) {
            cout << numbers.size() << "\t" << numbers.capacity() << endl;
            capacity = numbers.capacity();
        }
        numbers.push_back(1.0 * i);
    }
    numbers.resize(400);
    numbers.reserve(400);
    
    cout << numbers.size() << "\t" << numbers.capacity() << endl;

    return 0;
}
