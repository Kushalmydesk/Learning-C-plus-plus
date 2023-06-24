//Passing Variables
//demonstrates variable arguements
#include<iostream>
using namespace std;

void repchar(char,int);           //declaring  function prototype

int main(){
    char chin;
    int nin;

    cout << "Enter a character:"<<endl;
    cin >> chin;
    cout <<"Enter How Many times you want it to be printed:"<<endl;
    cin>> nin;

    repchar(chin,nin);

    return 0 ;
}

void repchar(char ch, int n){
  for(int i = 0; i<n; i++){
    cout <<ch;
  }
}
