//L21_Stacks_and_Queues
#include <iostream>
#include <stack>
#include <queue>
using namespace std;

class Test {
private:
    string name;

public:
    Test(): name("") {

    }

    Test(string name_): name(name_) {

    }

    ~Test() {

    }

    void print() const{
        cout << name << endl;

    }
};

int main() {

    stack<Test> testStack;
    testStack.push(Test("Mike"));
    testStack.push(Test("John"));
    testStack.push(Test("Sue"));

    /**
     * This is invalid Code! Object is destroyed.
        Test name = testStack.top();
        testStack.pop();
        name.print();  // reference to a destroyed object
     */

    while(!testStack.empty()) {
        Test name = testStack.top();
        name.print();        
        testStack.pop();
    }
    cout << endl;

    queue<Test> queueStack;
    queueStack.push(Test("Mike"));
    queueStack.push(Test("John"));
    queueStack.push(Test("Sue"));

    while(!queueStack.empty()) {
        Test name = queueStack.front();
        name.print();        
        queueStack.pop();
    }

    return 0;
}