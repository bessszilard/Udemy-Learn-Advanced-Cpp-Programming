//L64_Dynamics_cast.cpp
#include <iostream>
using namespace std;

class Parent {
public:
    virtual void speaker (void) {
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

    Parent *ppb = &brother1; //parent1;

    Brother *pb = dynamic_cast<Brother *>(ppb);

    if(pb == nullptr) {
        cout << "Invalid cast" << endl;
    }
    else {
        cout << pb << endl;
    }

    return 0;
}