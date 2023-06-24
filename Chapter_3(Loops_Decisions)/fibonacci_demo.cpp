// Demonstrates While loop using fibonacci series

#include <iostream>
using namespace std;

int main()
{
    int limit, next = 0, last = 1, count = 1;
    cout << "Enter how many numbers after the First one: ";
    cin >> limit;
    cout << next << " ";
    while (count <= limit - 1)
    {
        cout << last << " ";
        long sum = next + last;
        next = last;
        last = sum;
        count++;
    }

    cout << endl;
    return 0;
}
