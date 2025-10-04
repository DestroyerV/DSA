#include <iostream>
using namespace std;

unsigned int reverseBits(unsigned int n)
{
    unsigned int rev = 0;
    int bitCount = sizeof(n) * 8; // Number of bits in an unsigned int

    for (int i = 0; i < bitCount; i++)
    {
        // Extract the last bit of n
        int lastBit = n & 1;

        // Shift rev to the left to make space for the new bit
        rev <<= 1;

        // Set the last bit of rev to the extracted bit
        rev |= lastBit;

        // Shift n to the right to process the next bit
        n >>= 1;
    }

    return rev;
}

int main()
{
    unsigned int n;
    cout << "Enter a number: ";
    cin >> n;

    unsigned int reversedBits = reverseBits(n);
    cout << "Reversed bits: " << reversedBits << endl;

    return 0;
}
