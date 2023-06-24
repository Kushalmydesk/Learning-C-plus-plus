//Switch case are used then where we have some known options to choose from
//This program Demonstrates SWITCH statement

#include<iostream>
#include<conio.h>
using namespace std;

int main(){

    int ch ;
    char play;

    do
    {
        cout << "\nEnter Your Favourite Number (1 to 10) to win a Prize : "<< endl;
        cin >> ch;

        switch (ch)
        { 
        case 1:
            cout << "Better Luck Next time:";
            break;
        case 2:
            cout << "Better Luck Next time:";
            break;    
        case 3:
            cout << "Better Luck Next time:";
            break;
        case 4:
            cout << "Better Luck Next time:";
            break;
        case 5:
            cout << "Better Luck Next time:";
            break;
        case 6:
            cout << "Better Luck Next time:";
            break;
        case 7:
            cout << "Got an Iphone:";
            break;

        case 8:
            cout << "Better Luck Next time:";
            break;
        case 9:
            cout << "Better Luck Next time:";
            break;
        case 10:
            cout << "Better Luck Next time:";
            break;
    
    
        default:
            break;
        }
        cout << "\nWanna Try again? (y/n) : " << endl;
        play = getche();
    } while (play != 'n');
    
    

}