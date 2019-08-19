#include <iostream>
#include <fstream>

using namespace std;

int main(){

    string fileName = "L7_test.txt";

    fstream inFile;

    inFile.open(fileName, ios::in);

    if (inFile.is_open()) {
        string line;
        while(inFile) {
            getline(inFile, line);
            cout << line << endl;
        }
        inFile.close();
    }
    else {
        cout << "Cannot open file: " << fileName << endl;
    }
    
    return 0;
}