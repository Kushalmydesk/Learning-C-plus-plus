/* The For loop executes a section of code a fixed number of times. 
It's usually used when you know, before entering the loop, how many times you want to execute the code. */

//This example shows syntax of a single-statement code body

#include<iostream>
using namespace std;

int main(){
    int j; 

    for(j = 0 ; j< 15; j++)
        cout<< j * j <<" ";
    cout << endl;
    return 0;

}