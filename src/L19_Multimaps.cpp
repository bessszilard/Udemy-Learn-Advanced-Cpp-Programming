//L19_Multimaps

#include <iostream>
#include <map>
using namespace std;

int main(){
    multimap<int, string> lookup;

    lookup.insert(make_pair(30, "Mike"));
    lookup.insert(make_pair(30, "John"));
    lookup.insert(make_pair(10, "Levi"));
    lookup.insert(make_pair(20, "Tomi"));

    // auto its = lookup.equal_range(30);
    pair<multimap<int, string>::iterator, multimap<int, string>::iterator> its = lookup.equal_range(30);

    for (multimap<int, string>::iterator it = its.first; it != its.second; it++)
        cout << it->first << ": " << it->second << endl;


	return 0;
}