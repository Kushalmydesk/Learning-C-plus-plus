#include<iostream>
#include<iomanip>
#include<conio.h>
#include<windows.h>

using namespace std;


int main(){
    int rows, looper = 1 , loading  ;
    
    cout<< "Enter the Pattern Unit(5 - 30): " ; 
    cin >> rows;
    cout<< "Enter how many times to refresh(10-20): ";
    cin >> loading ; 


    while (looper <= loading ){
        
        //system("pause");
        Sleep(500);
        system("CLS");
        
        for(int i=1 ; i<rows-1 ; i++){
            for(int j = 1; j <=i; j++){
                cout << " ";
            }
            for(int k = i ; k<rows; k++){
                cout << "x";
            }
            for(int l= i ; l<rows-1; l++){
                cout << "x";
            }
            cout << endl;
        }

        for(int m = 1 ; m<rows; m++ ){
            for(int n = m; n<=rows-1 ; n++ ){
                cout << " ";
            }
            for(int o = 1 ; o<= m ; o++ ){
                cout << "x";
            }
            for(int p = 1 ; p<m ; p++){
                cout << "x";
            }
            cout<< endl;
        }
           
        
        
        //system("pause");
        Sleep(500);
        system("CLS");
        

        for(int i = 1; i<=rows; i++){
            for(int j = 1;j <= i; j++ ){
                cout<< "x";
            }
            for(int k=i; k<rows ; k++ ){
                cout << " ";
            }
            for(int l = i; l<rows; l++){
                cout << " ";
            }
            for(int m = 1; m<=i; m++){
                cout <<"x";
            }
            cout << endl;
        }
        for(int i = 1 ; i<=rows ; i++){
            for(int j = i ; j<rows; j++){
                cout << "x";
            }
            for(int k = 1; k<= i ;k++){
                cout << " ";
            }
            for(int l =1 ; l<=i; l++ ){
                cout << " ";
            }
            for(int m = i ; m<rows; m++){
                cout << "x";        }
            cout<< endl;
        }
        looper++;
    }

    return 0 ;

}