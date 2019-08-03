// L16_Maps.cpp
#include <iostream>
#include <map>

using namespace std;
int main() {
    map<string, int> ages;
    ages["Mike"] = 30;
    ages["John"] = 35;
    ages["Earl"] = 10;

    ages.insert(make_pair("Carla", 29));

    string element = "Mikes";
    if(ages.find(element) != ages.end()){    // we went trough the map and we didn't find the solution
        cout << element << " key found in the map" << endl;
    }
    else 
        cout << element << "  key not found the map" << endl;

    for(map<string, int>::iterator it = ages.begin(); it != ages.end(); it++) {
        // cout << it->first << "\t:\t" << it->second << endl;
        pair<string, int> age = *it;
        cout << age.first << "\t:\t" << age.second << endl;
    }

    cout << "Earl age is " << ages["Earl"] << endl;

    return 0;
}