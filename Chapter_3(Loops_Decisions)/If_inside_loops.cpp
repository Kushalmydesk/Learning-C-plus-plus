//Program for checking prime number
//Demonstrates IF Statement with prime numbers

/*But heres what I find is that exit just not only exit from that block, it also skips the next blocks, 
If it just only the current  block to  skip use exit, otherwise use break*/ 


#include<iostream>
#include<process.h>   //for exit()
using namespace std;

int main(){
    unsigned long n , j;
    char ch ;

    do
    {
        cout<< "Enter a number: ";
        cin >> n;
        for(j = 2; j<=n/2; j++){
            if(n%j == 0){
                cout<<"It's not a prime, divisible by " << j << endl;
                //exit(0);          
                break;
            }
            else{
                cout << "It's a prime number\n";
                break; 

            }
        }
        
        cout << "DO you want to do again? (y/n) :";
        cin >> ch; 

    } while (ch == 'y');
    
    return 0;
}