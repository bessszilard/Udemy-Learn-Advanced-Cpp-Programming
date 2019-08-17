//L63_Static_Cast.cpp
#include <iostream>
using namespace std;

class Parent {
public:
    void speaker (void) {
        cout << "speak function in Parent class" << endl;
    }
};

class Brother : public Parent {
public:
    void speak_b(){
        cout << "speak function in Brother class" << endl;
    }
};

class Sister : public Parent {

};

int main() {
    Parent parent1;
    Brother brother1;

    Parent *ppb = &brother1;
    Parent *pp  = &parent1;

    // *ppb->speaker();
    brother1.speaker();
    ppb->speaker();

    Brother *pbp = static_cast<Brother *>(&parent1);
    Brother *pbb = &brother1;
    
    pbp->speak_b();

    return 0;
}