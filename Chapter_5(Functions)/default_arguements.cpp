//Demonstrates the work flow of default arguements
//different approach on function overloading
//note: this will not work with any function

#include <iostream>
using namespace std;

void repchar(char = '#',int = 45);

int main(){

  repchar();
  repchar('=');
  repchar('*',30);

  return 0;
}
void repchar(char ch,int n){
  for(int j = 1; j<=n; j++){
    cout<< ch;
  }
  cout<< endl;
}
