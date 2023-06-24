#include<iostream>
#include<conio.h>
using namespace std;

int main(){

    int rows;
    cout << "Enter the Numbers of Rows: ";
    cin >> rows;

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
    getche();
    return 0 ;

}