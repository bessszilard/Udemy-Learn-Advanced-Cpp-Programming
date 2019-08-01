#include<iostream>
#include<exception>

using namespace std;

class MyExceptions : public exception {
    public: 
        virtual const char* what() const throw() {
            throw "Something went wrong";
        }
};

class TestClass {
    public:
        void goesWrong(){
            throw MyExceptions();
        }
};

int main(){
    TestClass test;

    try{
         test.goesWrong();
    }   
    catch (MyExceptions &e) {
        cout << e.what() << endl;
    }

    return 0;
}