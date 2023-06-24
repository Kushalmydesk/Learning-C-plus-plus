//widget part as an objects
#include<iostream>
using namespace std;

class part
  {
    private:
      int model_number;
      int part_number;
      float price;
    public:
      void setparts(int mn,int pn, float p)
      {
        model_number = mn; part_number = pn; price = p;
      }
      void showparts(){
        cout<<"\nThe Model Number is: "<<model_number;
        cout<<"\nThe Part Number is:  "<<part_number;
        cout<<"\nIt's price is: "<<price;
      }

};

int main() {
  part part1;
  part1.setparts(2,56,700.67);
  part1.showparts();
  return 0;
}
