//demonstrates passing arguements by reference
//tried the same concept in the program named "intpart_fracpart.cpp" without
// call by reference

#include<iostream>
using namespace std;

void intfrac(float, float&, float&);

int main(){
  float number, intpart, floatpart;

  do{
    cout<<"Enter a Real Number:";
    cin >> number;
    intfrac(number,intpart,floatpart);
    cout<<"\nInteger part is : "<<intpart<<endl;
    cout<< "Fractional part is : "<<floatpart<<endl;

  }while(number != 0.0);
  return 0;
}


void intfrac(float n, float& intp, float& fracp) {
  long temp = static_cast<long>(n);
  intp = static_cast<float>(temp);
  fracp = n - intp;
}
