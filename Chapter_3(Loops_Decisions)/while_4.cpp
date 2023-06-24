// Prints numbers raised to fourth power
// Demonstrates the mulit-statement loop body


#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int pow = 1;
    int numb = 1;

    while (pow<10000)      //loop while power <=4 digits
    {
        cout << setw(2) << numb;
        cout << setw(5) << pow << endl;
        ++ numb ; 
        pow  = numb * numb * numb * numb;
    }
    cout << endl;


    return 0;

    
} // namespace std;


