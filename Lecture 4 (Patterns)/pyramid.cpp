#include <iostream>
using namespace std;

int main()
{
    int n = 5;

    // main loop
    for (int i = 0; i < n; i++)
    {

        // space loop
        for (int j = n; j > i + 1; j--)
        {
            cout << " ";
        }

        // star loop
        for (int j = 0; j < i + 1; j++)
        {
            cout << " *";
        }
        cout << endl;
    }
}