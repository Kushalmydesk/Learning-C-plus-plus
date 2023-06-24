#include<iostream>
using namespace std;

int main(){ 

    int rows; 
    cout << "ENter the rows : " ;
    cin >> rows;

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

    return 0 ; 
}