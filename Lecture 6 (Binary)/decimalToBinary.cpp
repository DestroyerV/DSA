// To convert any decimal number into binary number divide the decimal number by 2 because the binary is the base 2 number and the decimal is base 10 number so, divide the decimal number by 2 until you don't get the 0 in quotient after that arrange the reminder of each division in reverse order and that's the binary number.

// eg. 6
// 6/2 --> Q = 3, rem = 0
// 3/2 --> Q = 1, rem = 1
// Binary is 10

#include <iostream>
using namespace std;

int decimalToBinaryFn(int n)
{
    int ans = 0;
    int power = 1; // places like unit, tens

    while (n > 0)
    {
        int rem = n % 2;
        n /= 2;
        ans += rem * power; // arrange reminder in reverse order
        power *= 10;
    }

    return ans;
}

int main()
{
    cout << "Enter a number: ";
    int n;
    cin >> n;
    cout << decimalToBinaryFn(n) << endl;
}