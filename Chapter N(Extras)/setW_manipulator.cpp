/* The setw manipualtor causes the number (or string) that follows it in the stream to be printed 
within the field of n characters, where as the n is the argument of setw(n)*/

#include<iostream>
#include<iomanip>
 
using namespace std;

int main(){

    long pop1 = 2425785, pop2 = 47, pop3 = 9761;
    cout << setw(8) << "Location" << setw(12) << "Population" << endl
    << setw(8) << "Portcity" << setw(12) << pop1 << endl
    << setw(8) << "Hightown" << setw(12) << pop2 << endl
    << setw(8) << "Lowville" << setw(12) << pop3 << endl;

    return 0 ;
     
}