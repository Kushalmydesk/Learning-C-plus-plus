//Demonstration of a small and simple object and class

#include <iostream>
using namespace std;

class smallobj{
  private:
    int somedata;    //this is a class_data
  public:
    //Member functions
    void setdata(int n){
      somedata = n;
    }
    void showdata(){
      cout<<"Your Data is :"<<somedata<<endl;
    }
};

int main() {
  //creating objects
  smallobj one,two;

  //accessing the member functions
  one.setdata(1029);
  two.setdata(20188);
  one.showdata();
  two.showdata();

  return 0;
}
