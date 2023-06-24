#include<iostream>
using namespace std ; 

const double constant = 0.453592;

float lbstokgs(float);
float kgstolbs(float);

int main(){
    float lbs,kgs;
    int chooser;
    

    cout << "How you want to enter your weight? \n1. kgs \n2. lbs"<<endl;
    cin >> chooser;

    switch (chooser)
    {
    case 1:
        cout << "Enter your weight in kgs:"<<endl;
        cin >> kgs;
        lbs = kgstolbs(kgs) ;
        cout << "Your weight in pounds " << lbs << " pounds";
        break;
    
    case 2:
        cout << "Enter your weight in pounds:"<<endl;
        cin >> lbs;
        kgs = lbstokgs(lbs) ;
        cout << "Your weight in kilograms " << kgs << " kgs";
        break;
    }




    return 0;
}


float kgstolbs(float kgs){

    float pounds = kgs / constant;
    return pounds;
}

float lbstokgs(float lbs){
    float kgs = lbs * constant;
    return kgs;
}