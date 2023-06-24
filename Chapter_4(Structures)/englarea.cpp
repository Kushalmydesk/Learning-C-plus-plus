//demonstrates the concept of nested Structures

#include<iostream>
using namespace std;

struct Distance{
  int feet;
  float inches;
};
struct Room{
  Distance width;
  Distance length;
};

int main(){
  Room dining;
  dining.length.feet = 13;
  dining.length.inches = 6.5;
  dining.width.feet = 10;
  dining.width.inches = 0.0;

  float l = dining.length.feet  + dining.length.inches/12;
  float w = dining.width.feet  + dining.width.inches/12;

  cout<<"Dining Room area is: "<<l * w <<" square feet\n";
  return 0;
}
