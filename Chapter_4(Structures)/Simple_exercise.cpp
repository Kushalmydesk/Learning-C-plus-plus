#include<iostream>
using namespace std; 

struct Phone{
    int area_code,exchange,number;

};

int main(){

    Phone P1,P2;
    P1.area_code = 777;
    P1.exchange = 345;
    P1.number  = 6756;
     //or we can decalre as other way 
     /*
      P2 = {777,345,6756}; the easiest
     */

    cout << "Enter Your area Code: ";
    cin >> P2.area_code;
    cout << "Enter Your Enxhcnage: ";
    cin >> P2.exchange;
    cout << "Enter Your Number: ";
    cin >> P2.number;


    cout<< " Your Phone number is (" << P2.area_code<<") "<< P2.exchange << " "<< P2.number << endl;
    cout<< " My Phone number is (" << P1.area_code<<") "<< P1.exchange << " "<< P1.number << endl;



    return 0;

}