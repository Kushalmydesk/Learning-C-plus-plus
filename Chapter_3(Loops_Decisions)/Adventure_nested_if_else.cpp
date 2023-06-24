// This program demonstrates an adventure game with nested IF_ELSE

#include<iostream>
#include<conio.h>
using namespace std;

int main(){

    char dir = 'a';
    int x = 10, y =10;

    cout << "Type Enter to quit\n";
    while (dir != '\r'){
        cout << "\nYour Location is " << x << " ,  " << y;
        cout << "\nPress direction key(n,e,s,w): " ;

        dir = getche();
        if( dir == 'n'){
            x++;
        } 
        else{
            if (dir == 's'){
                x--;
            }
            else{
                if( dir == 'e'){
                    y++ ;
                }
                else{
                    if(dir == 'w'){
                        y--;
                    }
                }
            }
        }
    }
    return 0;
}