//L105_Multiple_Multiple_Inheritance.cpp
#include <iostream>
using namespace std;

class MusicalInstrument {
public:
    virtual void play()  { cout  << "Playing instrument  ..." << endl; }
    virtual void reset() { cout << "Reseting instrument  ..." << endl; }
    virtual ~MusicalInstrument() {};
};

class Machine {
public:
    virtual void start() { cout << "Starting machine ,,,"  << endl; }
    virtual void reset() { cout << "Reseting machine ..." << endl; }
    virtual ~Machine() {};
};

class Sythesizer : public Machine, public MusicalInstrument {
public:
    virtual ~Sythesizer() {};
};

int main() {
    Sythesizer *sythesizer = new Sythesizer();

    sythesizer->play();
    sythesizer->start();

    // sythesizer->reset(); // error
    sythesizer->MusicalInstrument::reset();
    sythesizer->Machine::reset();
    
    return 0;
}