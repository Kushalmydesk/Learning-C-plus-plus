//calculates factorial using recursion
#include <iostream>
using namespace std;

unsigned long factfunc(unsigned long);

int main(){
  int n;
  unsigned long fact;
  cout<<"Enter an integer: "<<endl;
  cin >> n;
  fact = factfunc(n);
  cout << "The factorial of "<<n<< " is "<<fact<<endl;
  return 0;
}

unsigned long factfunc(unsigned long n){
  if(n>1){
    return n *factfunc(n-1); //Here the function will run from the first, the arguement value will be (n-1)
  }
  else{
    return 1;
  }
}

//I like This
