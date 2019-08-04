//L23_STL_Complex_Data_Types
#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main(){
    map <string, vector<int> > scores;

    scores["John"].push_back(14);
    scores["John"].push_back(31);
    scores["Jeremy"].push_back(2);

    for(map <string, vector<int> >::iterator it = scores.begin(); it != scores.end(); ++it ){
        string name = it->first;
        vector<int> scoreList = it->second;

        cout << name << ": " << flush;

        for(int i=0; i<scoreList.size(); i++) {
            cout << scoreList[i] << " " ;
        }
        cout << endl;
    }

    return 0;
}
