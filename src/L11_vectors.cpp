#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<string> names;

    names.push_back("Jerermy");
    names.push_back("James");
    names.push_back("John");
    
    for(vector<string>::iterator it = names.begin(); it != names.end(); ++it) {
        *it = "barkacs";
    }
    for(vector<string>::iterator it = names.begin(); it != names.end(); ++it) {
        cout << *it << endl;
    }

    return 0;
}