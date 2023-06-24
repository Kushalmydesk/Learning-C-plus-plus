//object represents a counter variable
#include<iostream>
using namespace std;

class  Counter
  {
    private:
      unsigned int count; //class data member
    public:
      /*Creating a Counter, i like this new Syntax:
      This is called an Initializer list.
      Instead of Doing this-> Counter_name(){data member = value}
      Do this preferred way-> Counter_name():data member(value){}*/
      Counter():count(0){}
      //creating a destructor, they don't take any arguements
      ~Counter(){}

      void inc_count(){
        count++;
      }
      int get_data(){
        return count;
      }
  };

  int main(){

    Counter c1,c2;
    cout<<"\nc1: "<<c1.get_data();
    cout<<"\nc2: "<<c2.get_data();
    c1.inc_count();
    c2.inc_count();
    c2.inc_count();
    cout<<"\nc1: "<<c1.get_data();
    cout<<"\nc2: "<<c2.get_data();

    cout<<endl;
    return  0;
  }
