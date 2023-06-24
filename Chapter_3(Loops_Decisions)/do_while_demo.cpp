//We need DO_WHILE loop where we need to run the loop body at least one time, no matter what the initial state of the test expression

//Demonstrates DO loop

#include<iostream>
using namespace std;

int main()
{
    int dividend, divisor;
    char ch;

    do
    {
        cout << "Enter Dividend: ";
        cin >> dividend;
        cout << "Enter Divisor: ";
        cin >> divisor;
        cout << "\nQuotient is: " << dividend / divisor ;
        cout << "\nRemainder is: " << dividend % divisor ;

        cout << "\nDo another? (y/n) :";  
        cin >> ch;
        
    } while (ch != 'n');

    return 0 ;
    

}