//L20_Sets.cpp
#include<iostream>
#include<set>
using namespace std;

int main(){
    set <int> numbers;


    numbers.insert(1);
    numbers.insert(4);
    numbers.insert(3);
    
    for(set<int>::iterator it = numbers.begin(); it != numbers.end(); it++) {
        cout << *it << " " << flush;
    }
    cout << endl;

    if (numbers.find(2)!= numbers.end()) {
        cout << "number found in the set";
    }
    else {
        cout << "number not found in the set";
    }

    return 0;
}
