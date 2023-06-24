#include<iostream>
using namespace std;

int main(){


    
    int i,j,n =5;

    for(i = 1 ; i <= n ; i++ ){
        for(j = i ; j <= n ; j++ ){
            cout << " ";
        }
        for(int j = 1; j<i ; j++)
        {
            cout << "x";
        }
        for(int j= 1 ; j<=i; j++){
            cout << 'x';
        }
        cout << endl;
    }
    return 0;
}


/*
    #include<iostream>
using namespace std;

int main(){
    int rows ; 

    cout << "Enter number of rows: " ;
    cin >> rows; 


    for(int i = 1 ; i <=rows ; i++ )
    {
        for(int space = 1; space <=rows-i; space++ )
        {
            cout << " ";
        }
        for(int k = 1 ; k <= 2*i-1 ; k++ ){
            cout << "x";
        }   
        
        <<use either for loop or while loop

        while(k != 2*i-1 )
        {
            cout << "X";
            k++;
        }
        cout << endl;
    }
    return 0;
}
*/