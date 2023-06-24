//lists cubes from 0 to 100

#include<iostream>
#include<iomanip>
using namespace std;

int main(){

    int numb;

    for(numb = 1; numb<=10; numb ++){
        
        int cube = numb *numb *numb;
        cout<< setw(4) << numb << setw(6) << cube << endl;
        
    }
    return 0;
}