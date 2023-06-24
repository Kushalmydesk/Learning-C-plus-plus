//uses parts inventory to demonstrate structures

#include<iostream>
using namespace std;

 struct name {
   string first_name;
   string last_name;
};
 struct user_name{
   string user_first_name;
   string user_last_name;
 };

int main(){
   name myName;
   user_name myRealName;

   myName.first_name = "Kushal";
   myName.last_name = "Mondal";

   cout<<"Enter Your First Name: "<<endl;
   cin >> myRealName.user_first_name;

   cout<<"Enter Your Last Name: "<<endl;
   cin>>myRealName.user_last_name;

   if(myName.first_name == myRealName.user_first_name && myName.last_name == myRealName.user_last_name ){
     cout<<"You are the User, Welcome!";
    }
    else {
      cout<<"You are not My User, Get the fuck out of here";
    }
 return 0;


}
