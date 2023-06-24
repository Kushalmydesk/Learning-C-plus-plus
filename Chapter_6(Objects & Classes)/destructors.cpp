// as there is constructors when an object is created, and when destroyed there is destructors.

#include<iostream>
using namespace std;

class Foo{

    private:
        int data;
    public:
        Foo(): data(0)
            { }
        ~Foo() 
         { }
};

int main(){
    




    return 0;
}