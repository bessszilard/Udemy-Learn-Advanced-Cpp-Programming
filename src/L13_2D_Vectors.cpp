#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector< vector<int> > grid(3, vector<int>(3,7));
    grid[1].push_back(123);

    for (int row = 0; row < grid.size(); ++row) {
        for (int col = 0; col < grid[row].size(); col++) {
            cout << grid[row][col] << "\t" << flush;
        }
        cout << endl;
    }

    return 0;
}