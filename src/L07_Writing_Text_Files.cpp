#include <iostream>
#include <fstream>
// #include <string>
using namespace std;

int main() {

    string filename = "L7_test.txt";

    fstream outFile;

    outFile.open(filename, ios::out);

    if (outFile.is_open()){
        outFile << "Hello there" << endl;
        outFile << 321 << endl;
        outFile.close();
    }
    else {
        cout << "Coundn't create the file " << filename << endl; 
    }

    return 0;
}