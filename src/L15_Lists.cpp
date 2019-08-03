#include <iostream>
#include <list>

using namespace std;
int main() {
    list <int> numbers;

    numbers.push_back(1);
    numbers.push_back(2);
    numbers.push_back(3);

    numbers.push_front(0);

    list<int>::iterator it = numbers.begin();
    it++;
    numbers.insert(it, 100);

    for(list<int>::iterator it = numbers.begin(); it != numbers.end(); ++it ) {
        if (*it == 2) {
            numbers.insert(it, 1234);
        }
        if (*it == 100) {
            it = numbers.erase(it);
            it--;
        }
    }

    for(list<int>::iterator it = numbers.begin(); it != numbers.end(); ++it ) {
        cout << *it << "\t";
    }

    return 0;
}