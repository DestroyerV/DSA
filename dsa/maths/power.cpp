// LC 50

#include <iostream>
using namespace std;

int main()
{
    double x = 3; // Base
    int n = 5;    // Exponent

    long binform = n;
    double ans = 1;

    if (n == 0)
        return 1.0;

    if (x == 0)
        return 0.0;

    if (x == 1)
        return 1.0;

    if (x == -1 && n % 2 == 0)
        return 1.0;

    if (x == -1 && n % 2 != 0)
        return -1;

    if (n < 0)
    {
        x = 1 / x;
        binform = -binform;
    }

    while (binform > 0)
    {
        if (binform % 2 == 1)
        {
            ans *= x; // Multiply by current x if the current bit of binform is 1
        }
        x *= x;       // Square x
        binform /= 2; // Shift binform to the right
    }

    cout << binform << ans << endl; // Output: 243 (which is 3^5)

    return 0;
}
