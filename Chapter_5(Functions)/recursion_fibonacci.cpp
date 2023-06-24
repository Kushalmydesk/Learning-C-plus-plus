#include <iostream>
using namespace std;

int fibo(int);

int main()
{
    int a, i = 0;
    cout << "Enter The Position: " << endl;
    cin >> a;
    cout << "The fibonacci series for position " << a << " is " << endl;
    while (i < a)
    {
        cout << " " << fibo(i);
        i++;
    }

    return 0;
}

int fibo(int n)
{
    if (n == 0)
    {
        return 1;
    }
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return (fibo(n - 1) + fibo(n - 2));
    }
}