//Demonstration of initializing objects using default copy Constructor
#include<iostream>
using namespace std;

class Distance
  {
    private:
      int feet;
      float inches;
    public:
      Distance():feet(0),inches(0.0){}
      //Overloading the Constructor by changing the number of parameters
      Distance(int ft, float in):feet(ft),inches(in){}

      void getdist(){
        cout<<"Enter the Feet: "<<endl;cin>>feet;
        cout<<"\nEnter the Inches: "<<endl;cin>>inches;
      }
      void showdist(){
        cout<< feet<<"\'-"<<inches<<"\"\n";
      }
      void add_dist(Distance,Distance); //Declaring the Member Function Prototype

};

int main(){
  /*in this practice we actually defining objects by overriding the constructor with one arguement, but we have'nt define any constructor with one value*/

  Distance dist1;
  dist1.getdist();
  Distance dist2(dist1);
  Distance dist3(11,5.78);



  cout<<"\ndist1: "; dist1.showdist();
  cout<<"\ndist2: "; dist2.showdist();
  cout<<"\ndist3: "; dist3.showdist();
  cout<<endl;

  return 0;
}
