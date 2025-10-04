#include <iostream>
#include <limits.h>
using namespace std;

int reverseNumber(int num)
{
    int reversed = 0;
    while (num != 0)
    {
        int digit = num % 10;
        if (reversed > INT_MAX / 10 || reversed < INT_MIN / 10)
        {
            return 0;
        }
        reversed = reversed * 10 + digit;
        num /= 10;
    }
    return reversed;
}

int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;
    int reversedNumber = reverseNumber(number);
    cout << "Reversed Number: " << reversedNumber << endl;
    return 0;
}