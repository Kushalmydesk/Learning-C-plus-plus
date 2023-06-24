#include<iostream>
using namespace std;

class Summation{
    private:
      int num1,num2;
    public:
      Summation():num1(0),num2(0){}
      Summation(int number1, int number2):num1(number1),num2(number2){}

      void get_Nums(){
        cout<<"Enter the First part: "<<endl; cin>>num1;
        cout<<"Enter the Second part: "<<endl; cin>> num2;
      }
      void show_Nums(){
        cout<<"The First part is: "<<num1<<endl;
        cout<<"The Second part is: "<<num2<<endl;

      }

      Summation add_nums(Summation);

};

Summation Summation::add_nums(Summation s){
  Summation s4;
  s4.num1 = num1 + s.num1;
  s4.num2 = num2 + s.num2;
  return s4;
}

int main(){
  Summation s1,s3,s2(5,6);
  s1.get_Nums();
  s3 = s1.add_nums(s2);

  cout<<"\n s1 = ";
  s1.show_Nums();
  cout<<"\n s2 = ";
  s2.show_Nums();
  cout<<"\n s3 = ";
  s3.show_Nums();

  return 0;
}
/* So here is the thing, i realized from this practice;
 If i declare a parameterized constructor, i have to manually define the default constructor as well
 and also set the value of the data_members, and we cannot concatenate the member_function with the "<<" operand
 but we can just put it in a new statement after the 'cout' statement.
*/
