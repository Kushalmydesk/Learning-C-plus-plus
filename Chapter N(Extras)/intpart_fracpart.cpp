//Tried to figure out the Integer part and Fractional Part in This

#include <iostream>
#include<cmath>
using namespace std;

void inte_float(float n){
  int integer = floor(n);
  float floating = n - integer;
  cout<<"The Integer Part is: "<<integer<<endl;
  cout<<"The Fractional Part is: "<<floating<<endl;
}

int main(){
  float number;
  cout<<"Enter a Real Number: ";
  cin>>number;

  inte_float(number);





  return 0;
}
