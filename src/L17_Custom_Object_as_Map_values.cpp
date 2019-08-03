//L17_Custom_Object_as_Map_values
#include <iostream>
#include <map>
using namespace std;

class Person{
    private:
        string name;
        int age;
    public:
        Person(): name(""), age(0){
        }
        Person(const Person &other) {
            // cout << "Copy constructor running!" << endl;
            name = other.name;
            age = other.age;
        }
        Person(string name_, int age_) :
            name(name_), age(age_) {
            }
        
        void print() const { // every global parameters is constant in the class 
            cout << name << " :\t" << age;
        }
        bool operator<(const Person &other) const {
            if (name == other.name)
                return age < other.age;
            return name < other.name;
        }
};


int main() {
    map<Person, int> people;
    people[Person("Mark",  32)] = 12;
    people[Person("Mark",  34)] = 31;
    people[Person("Laura", 21)] = 32;
    people[Person("Peter", 34)] = 41;

    // people.insert(make_pair(55, Person("Tibor", 32)));1
    for(map<Person, int>::iterator it = people.begin(); it != people.end(); it++ ) {
        // cout << it->first << " :\t" << flush;
        // it->second.print();
        cout << it->second << ": " << flush;
        it->first.print();
        cout << endl;
    }

    return 0;
}