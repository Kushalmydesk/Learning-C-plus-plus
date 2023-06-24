// Calculates factorial of the given number

#include<iostream>
#include<iomanip>
using namespace std ; 
 
int main(){

    unsigned int  i , num;
    unsigned long fact = 1 ;
    cout << "Enter the Number: ";
    cin >> num;
    for(i=1 ; i<=num; i++){
        fact *= i;
    }

    cout << "Factorial is " << fact << endl;



    return 0;
}

