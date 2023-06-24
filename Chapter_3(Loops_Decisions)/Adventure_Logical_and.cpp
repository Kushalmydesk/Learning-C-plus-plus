//Demonstartes the Logical Operators and Now make the Adventure Game a little more exciting

#include<iostream>
#include<conio.h>
#include<process.h>
using namespace std;

int main(){

    char dir = 'a';
    int x = 10, y = 10; 

    while (dir != '\r'){
        cout << "\nYour Location is " << x << " and " << y << endl;
        cout << "\nEnter new Direction(n,s,w,e): " <<  endl ;
        dir =  getche();
        switch(dir){
            case 'n':
                x++;
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

        if (x == 7 && y== 11){              // && is logical  and, it means both the condition have to be true to execute the corresponding code
            cout << "\nYou found the treasure!\n";
            break;
        }
    }
    return 0;
}

