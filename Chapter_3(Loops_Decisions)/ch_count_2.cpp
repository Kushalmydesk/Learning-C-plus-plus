//Counting the number of characters and  words in a phrase, but with the assignment expression

#include<iostream>
#include<conio.h>
using namespace std;

int main(){

    int wordcount = 1;
    int chcount = 0;
    char ch ;
    while((ch=getche() != '\r')){
        if(ch ==' '){
            wordcount++;
        }
        else{
            chcount++;
        }
    }
    cout << "Number of words " << wordcount << " and " << chcount << " characters " << endl;
    return 0;
}