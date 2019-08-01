#include <iostream>

using namespace std;


// disable padding
#pragma pack(push, 1)
struct Person {
    char name[50];
    int age;
    double weight;
};
#pragma pack(pop)

int main(){
    cout << sizeof(Person) << endl;
    return 0;
}