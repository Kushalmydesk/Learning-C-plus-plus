//Demonstrates CONTINUE statement

#include<iostream>
using namespace std;

int main(){
    long dividend, divisor;
    char ch;

    do{

        cout << "Enter dividend: " << endl ;
        cin >> dividend;
        cout << "Enter Divisor :" << endl;
        cin >> divisor;
        if(divisor == 0){
            cout << "Illegal Divisor\n " ;
            continue ; 
        }

        cout << " Quotient is " << dividend / divisor;
        cout << " , remainder is  " << dividend % divisor;

        cout << "\nDo Another? (y / n): " ; 
        cin >> ch ;

    }while(ch != 'n');


    return 0;
}