//demonstrates global variables

#include <iostream>
#include <conio.h>
using namespace std;

char ch = 'a';   //global variable initialization

void getachar();
void putachar();

int main(){
  while(ch != '\r'){
    getachar();
    putachar();
  }
  cout<<endl;
  return 0;
}

void getachar(){
  ch = getch();
}

void putachar(){
  cout << ch;
   
}
