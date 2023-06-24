#include<iostream>
using namespace std;


struct Distance {

    int feet;
    float inches;

};

Distance adding(Distance, Distance);
void display (Distance);

int main(){
    Distance d1,d2,d3;
    d1 = {23,0.87};
    d2 = {25,11.45};

    d3 = adding(d1,d2);

    display(d1); cout<< " + ";  display(d2); cout << " = " ;
    display(d3);



    return 0;
}

Distance adding (Distance d1, Distance d2){

    Distance d3;
    d3.inches = d1.inches + d2.inches;
    d3.feet = 0;
    if(d3.inches >= 12.0){
        d3.inches -= 12.0;
        d3.feet++;
    }
    d3.feet += d1.feet + d2.feet;
}

void display(Distance d){
    cout << d.feet << " and " << d.inches;
}