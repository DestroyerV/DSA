#include <iostream>
using namespace std;

int main()
{
    // main loop
    int n = 5;
    for (int i = n; i > 0; i--)
    {
        // space
        for (int j = i; j < n; j++)
        {
            cout << " ";
        }

        // print
        for (int j = 0; j < i; j++)
        {
            cout << " *";
        }
        cout << endl;
    }
}