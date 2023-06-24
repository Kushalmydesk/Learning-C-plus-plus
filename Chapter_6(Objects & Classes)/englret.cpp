//Member Functions returns value of type Distance
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
        cout<<"Enter the Feet: "<<endl; cin>>feet;
        cout<<"\nEnter the Inches: "<<endl; cin>>inches;
      }
      void showdist(){
        cout<< feet<<"\'-"<<inches<<"\"\n";
      }
      Distance add_dist(Distance); //Declaring the Member Function Prototype

};

Distance Distance::add_dist(Distance d2){
  Distance temp;
  temp.inches = inches + d2.inches;
  if(temp.inches>=12.0){
    temp.inches -= 12.0;
    temp.feet +=1;
  }
  temp.feet += feet + d2.feet;
  return temp;
}

int main(){

  Distance dist1,dist3;
  dist1.getdist();
  Distance dist2(dist1);

  dist3 = dist1.add_dist(dist2);



  cout<<"\ndist1: "; dist1.showdist();
  cout<<"\ndist2: "; dist2.showdist();
  cout<<"\ndist3: "; dist3.showdist();
  cout<<endl;

  return 0;
}
