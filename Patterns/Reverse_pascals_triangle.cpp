#include <iostream>
using namespace std;

int main()
{
    int rows;
    cout << "Enter the Rows: ";
    cin >> rows;

    for (int i = 1; i <= rows; i++)
    {
        for (int j = i; j <= rows; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << "x ";
        }
        cout << endl;
    }

    for (int m = 1; m < rows; m++)
    {
        for (int n = 1; n <= m + 1; n++)
        {
            cout << " ";
        }
        for (int o = m; o < rows; o++)
        {
            cout << "x ";
        }
        cout << endl;
    }
    return 0;
}