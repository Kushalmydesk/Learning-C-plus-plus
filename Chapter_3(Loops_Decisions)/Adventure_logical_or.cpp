//Demonstrates the Logical OR Operator

#include<iostream>
#include<process.h>
#include<conio.h>
using namespace std;

int main(){

    char dir = 'a';
    int x = 10, y = 10;

    while (dir != '\r')
    {
        cout<< "\nYour location " << x << " and " << y << endl;
        
        if(x<5 || x>15)
        {
            cout << "Bewar : Dragons Lurk here!"<< endl;

        }
        cout << "\nEnter direction(n,s,e,w) : ";
        dir = getche();

        switch(dir)
        {   
            case 'n': 
                x-- ;
                break;
            case 's':
                x--;
                break;
            case 'e':
                y++;
                break;
            case 'w':
                y--;
                break;
        }
    }
    return 0;
}