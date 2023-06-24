//uses parts inventory to demonstrate structures

#include<iostream>
using namespace std;

struct part{
  int modelnumber;
  int partnumber;
  float cost;
};


int main(){
  part part1;
  part1.modelnumber = 3200;
  part1.modelnumber = 372;
  part1.cost = 210;

  cout <<"ModelNumber is: "<<part1.modelnumber<<endl;
  cout <<"PartNumber is: "<<part1.partnumber<<endl;
  cout <<"Cost is: "<<part1.cost<<"$"<<endl;

 return 0;


}
