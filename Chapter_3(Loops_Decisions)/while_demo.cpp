/* While loop is used when we don't know the exact number for looping */

// Demontrates  single-statement  While loop which do not require braces for loop body

#include<iostream>
using namespace std;

int main()
{
    int n = 99;

    while (n != 0)
        cin >> n;

    cout << endl;
    return 0;
}
