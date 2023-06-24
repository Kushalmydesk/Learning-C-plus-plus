//Demonstrating Constructor Overloading, defining member functions outside the class
//and passing objects as function arguements
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

//Defining the member function
void Distance:: add_dist(Distance d2, Distance d3){
  inches = d2.inches + d3.inches;
  feet = 0;
  if(inches>=12.0){
    inches-=12.0;
    feet++;
  }
  feet += d2.feet + d3.feet;
}

int main(){
  Distance dist1,dist3;
  Distance dist2(11,6.25);

  dist1.getdist();
  dist3.add_dist(dist1,dist2);

  cout<<"\ndist1 = "; dist1.showdist();
  cout<<"\ndist2 = "; dist2.showdist();
  cout<<"\ndist3 = "; dist3.showdist();

  cout<<endl;
  return 0;

}
