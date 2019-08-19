#include <iostream>
#include <fstream>

using namespace std;

int main(){

    string fileName = "L9_population.txt";

    fstream inFile;

    inFile.open(fileName, ios::in);

    if (inFile.is_open()) {
        string line;
        while(inFile) {
            getline(inFile, line, ':');
            
            int population;
            inFile >> population;
            
            inFile.get();
            inFile >> ws;   // ws - white space

            if (!inFile)
                break;

            cout << line << " -- "<< population << endl;
        }
        inFile.close();
    }
    else {
        cout << "Cannot open file: " << fileName << endl;
    }
    
    return 0;
}