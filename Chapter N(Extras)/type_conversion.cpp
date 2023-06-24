/* some programs need to work with different types of variables in the same expression,
here we will see that the compiler ususally converts a variable to the type needed*/

#include<iostream>
using namespace std;

int main(){ 
    int count = 7;
    float multi = 144.6F;
    double total_multi = (count * multi);
    cout << "Total Multiplication  = " << total_multi << endl;
    return 0; 
}