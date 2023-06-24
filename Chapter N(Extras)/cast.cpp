/* Now we need to use cast method where we want to convert the variable type 
explicitly, the compiler don't do this automatically
When we cast a variable to another type before any kind of operation, it is called coercion*/


#include <iostream>
using namespace std;

int main(){

    int intVar = 1500000000;
    intVar  = (intVar * 10) / 10 ; 
    cout << "intVar = "  << intVar << endl;

    intVar = 1500000000 ; 
    intVar = (static_cast<double>(intVar) *10) / 10;
    cout << "intVar = "  << intVar << endl;


    return 0;

}