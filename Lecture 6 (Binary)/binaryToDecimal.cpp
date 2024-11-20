#include <iostream>
using namespace std;

int binaryToDecimalFn(int n)
{
    int ans = 0;
    int power = 1;

    while (n > 0)
    {
        int rem = n % 10;
        n /= 10;
        ans += rem * power;
        power *= 2;
    }

    return ans;
}

int main()
{
    cout << "Enter a binary: ";
    int n = 01101;
    // cin >> n;
    cout << binaryToDecimalFn(n) << endl;
}