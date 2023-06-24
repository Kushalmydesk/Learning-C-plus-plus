#include<iostream>
#include<cstdlib>
#include<conio.h>
using namespace std;

int main(){
    
    int rows;
    
    cout<< "Enter the Rows:" ; 
    cin  >> rows ; 
    for(int i = 1 ; i<= rows ; i++){
        for(int j = 1; j <=i ; j++ ){
            cout << "x";
        }
        
        cout << endl;
    }
    for(int m = 1 ; m <rows ; m++){
        for(int j = m ; j<rows ; j++){
            cout << "x";
        }
        cout << endl;
    }


    
    system("pause")  ;
    getch();
    return 0 ;

}