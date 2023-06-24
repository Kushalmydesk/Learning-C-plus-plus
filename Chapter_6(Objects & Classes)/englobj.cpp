//Demonstrating Objects as data types
#include <iostream>
using namespace std;

class Distance
  {
    private:
      int feet;
      float inches;
    public:
      void setdist(int ft,float in){
        feet = ft;
        inches = in;
      }
      void getdist(){
        cout<<"Enter the Feet: "<<endl;cin>>feet;
        cout<<"\nEnter the Inches: "<<endl;cin>>inches;
      }
      void showdist(){
        cout<< feet<<"\'-"<<inches<<"\"\n";
      }

};

int main(){
  Distance dist1,dist2;
  dist1.setdist(11,6.25);
  dist2.getdist();
  dist1.showdist();
  dist2.showdist();

  return 0;

}
