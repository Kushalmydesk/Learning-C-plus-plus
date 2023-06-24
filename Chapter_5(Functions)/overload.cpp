//demonstrates function overloading
// Overloading is basically using name name for all of the function which are using different types and numbers of arguements,
// we dont have to remember all the name, we and compiler differentiate one with another by seeing the arguments


#include <iostream>
using namespace std;

void repchar();
void repchar(char);
void repchar(char,int);


int main(){
  repchar();
  repchar('+');
  repchar('=',30);
  return 0;
}

void repchar(){
  for(int i = 1;i<=45; i++){
    cout<<"*";
  }
  cout<<endl;
}
void repchar(char ch){
  for(int i = 1; i<=45; i++){
    cout<<ch;
  }
  cout<<endl;
}

void repchar(char ch, int n){
  for(int i = 1; i<=n;i++){
    cout<<ch;
  }
  cout<<endl;
}
