//Demonstrates IF statement
#include<iostream>
using namespace std ; 

int main(){

    int x; 

    cout << "Enter a number: ";
    cin >> x;

    if(x > 100){
        cout << "The number is greater than 100";  //as loops, it needs braces for multiple statement, or not
    }

    return 0;

}