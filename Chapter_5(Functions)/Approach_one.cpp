#include<iostream>
using namespace std;


void print_name(string);   // in function prototype we just declare the data type of the parameter, not the variable name

int main(){

    string name;
    cout << "Enter Your name :" << endl;
    cin >> name;
    print_name(name);
    


    return 0 ; 
}

void print_name(string name){
    cout << "the function defined after the main function" << endl;
    cout << "Your name is " << name << endl;
}