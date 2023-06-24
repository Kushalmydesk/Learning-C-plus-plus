//This program Demonstrates ELSE....IF construction

#include<iostream>
#include<conio.h>

using namespace std;

int main(){

    int x = 10, y = 10;
    char dir = 'a';

    cout << "Type Enter to quit\n" ;
    while (dir != '\r'){

        cout << "\nYour location " << x  << " and " << y << endl ;
        cout << "Enter New Location (n,s,w,e) : " << endl;

        dir = getche();

        if(dir == 'n'){
            x++;
        }
        else if( dir == 's'){
            x--;
        }
        else if(dir == 'e'){
            y++;
        }
        else if(dir == 'w'){
            y--;
        }
        

    }
    return 0;
}