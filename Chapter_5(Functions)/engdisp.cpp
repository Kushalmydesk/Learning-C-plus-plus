//demonstrates passing structures as arguements
#include<iostream>
using namespace std;

struct Distance{
  int feet;
  float inches;
};

void engldisp(Distance);

int main(){
  Distance d1, d2;

  cout <<"Enter the First Distance's feet"<<endl;
  cin >> d1.feet;
  cout <<"Enter the First Distance's inches"<<endl;
  cin >> d1.inches;

  cout <<"Enter the Second Distance's feet"<<endl;
  cin >> d2.feet;
  cout <<"Enter the Second Distance's inches"<<endl;
  cin >> d2.inches;

  cout<< "\n d1 = ";
  engldisp(d1);
  cout << "\n d2 = ";
  engldisp(d2);
  cout << endl;


  return 0;

}
void engldisp(Distance dd){
  cout<<dd.feet << "\'-"<<dd.inches <<"\"";
}
