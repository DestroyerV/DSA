#include <iostream>
using namespace std;

int n = 4;

int main()
{

    // upper part
    for (int i = 0; i < n; i++)
    {

        // spaces
        for (int j = i; j < n - 1; j++)
        {
            cout << " ";
        }

        // satrs
        for (int j = 0; j <= i; j++)
        {
            cout << " *";
        }
        cout << endl;
    }

    // lower part
    for (int i = n; i > 0; i--)
    {
        // spaces
        for (int j = i; j < n; j++)
        {
            cout << " ";
        }

        // satrs
        for (int j = 0; j < i; j++)
        {
            cout << " *";
        }
        cout << endl;
    }
}