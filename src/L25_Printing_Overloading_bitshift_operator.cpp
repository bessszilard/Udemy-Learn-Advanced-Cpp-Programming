//L25_Printing_Overloading_bitshift_operator.cpp
#include <iostream>
using namespace std;
class Test {
private:
    int id;
    string name;
public:
    Test() : id(0), name(0) {} 
    Test(int id_, string name_) : id(id_), name(name_) {}

    friend ostream &operator<<(ostream &out, const Test &test) {
        out << test.id << ": " << test.name << flush;
        return out;
    }
};

int main() {
    Test test1(1, "Joe");
    Test test2(3, "John");

    cout << test1 << "\t" << test2 << endl;
    
    return 0;
}