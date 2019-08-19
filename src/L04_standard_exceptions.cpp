#include <iostream>
using namespace std;

class GoingWrong{
public:
    GoingWrong() {
        char *pMemory = new char[999999999999999];
        delete[] pMemory;
    }
};

int main(){
    try {
        GoingWrong wrong;
    }
    catch(bad_alloc e) {
        cout << "Caught exception: " << e.what() << endl;
    }
    cout << "still running" << endl;
    return 0;
}