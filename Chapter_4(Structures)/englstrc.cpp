//demonstrates structures using English Measurement

#include <iostream>
using namespace std;

struct Distance{
    int feet;
    float inches;
};



int main(){
  Distance d1,d2,d3;
  cout << "Enter the First Distance's Feet and Inches:"<<endl;
  cin >> d1.feet>>d1.inches;
  cout << "Enter the Second Distance's Feet and Inches:"<<endl;
  cin >> d2.feet>>d2.inches;
  d3.inches = d1.inches + d2.inches;
  d3.feet = 0;
  if(d3.inches >= 12.0){
    d3.inches -= 12.0;
    d3.feet ++;
  }
  d3.feet += d1.feet + d2.feet;

  cout<<d1.feet<<"\' - "<<d1.inches<<"\" + ";
  cout<<d2.feet<<"\' - "<<d2.inches<<"\" = ";
  cout<<d3.feet<<"\' - "<<d3.inches<<"\"   ";



  return 0;
}
