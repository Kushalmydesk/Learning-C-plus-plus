#include<iostream>
using namespace std;

void print_name(string name){
    cout << "The function is defined before the main()"<<endl;
    cout << "Your name is "<< name << endl;
}

int main(){

    string name;
    cout << "Enter your name : ";
    cin >> name;

    print_name(name);




    return 0;
}