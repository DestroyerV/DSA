# Bit Manipulation

## Bitwise Operators

- ### Bitwise `&`

        0 & 0 = 0

        0 & 1 = 0

        1 & 0 = 0

        1 & 1 = 1

    **eg:** 4 = 100, 8 = 1000 then 4 & 8 = 0000

- ### Bitwise `|`

        0 | 0 = 0

        0 | 1 = 1

        1 | 0 = 1

        1 | 1 = 1

    **eg:** 4 = 100, 8 = 1000 then 4 | 8 = 1100 = 12

- ### Bitwise `^` (XOR)

        0 ^ 0 = 0

        0 ^ 1 = 1

        1 ^ 0 = 1

        1 ^ 1 = 0

    **eg:** 4 = 100, 8 = 1000 then 4 ^ 8 = 1100 = 12
  - It can also be used to add two numbers.

- ### Bitwise `<<`

    **eg:** 4 = 100, 1 = 1 then 4 << 1 = 1000 = 8

        Trick: ans = a*2^b
        ans = 4*2^1 = 8

- ### Bitwise `>>`

    **eg:** 4 = 100, 1 = 1 then 4 >> 1 = 10 = 2

## Operator Precendence

| Operator                  | Precedence     |
| ------------------------- | -------------- |
| !, +, - (unary operators) | first R to L   |
| =, /, %                   | second L to R  |
| +, -                      | third L to R   |
| <, <=, >=, >              | fourth L to R  |
| ==, !=                    | fifth L to R   |
| &&                        | sixth L to R   |
| //                        | seventh L to R |
| =                         | last R to L    |

## Data Types Modifiers

change meaning of data types

- long : >= 4 Bytes (32 bit) eg. `long int` (8 Bytes)

- short : >= 2 Bytes (16 bit) eg. `short int` (2 Bytes)

- long long : >= 8 Bytes (64 bit) eg. `long long int` (8 Bytes)

- signed : -2^31 to 2^31 - 1 eg. `signed int` (4 Bytes)

- unsigned : 0 to 2^32 - 1 eg. `unsigned int` (4 Bytes)

Q. Find a number is a power of 2 or not using bitwise operators.

Solution:

```cpp
#include <iostream>
using namespace std;

bool isPowerOf2(int n)
{
    return (n > 0) && ((n & (n - 1)) == 0);
}

int main()
{
    cout << "Enter a number: ";
    int n;
    cin >> n;

    if (isPowerOf2(n))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}
```

### Explaination

#### Condition (n & (n - 1)) == 0

This is the key part of the function. Here's what it does:

1. Binary Representation of Powers of 2: Powers of 2 have a unique property in their binary representation. In binary:

        1 is 0001

        2 is 0010

        4 is 0100

        8 is 1000

    Notice that only one bit is set to 1, and all other bits are 0.

2. Subtracting 1 from a Power of 2: When you subtract 1 from a power of 2, all the bits after the only set bit (the 1) will flip.

    For example:

        4 (binary: 0100) − 1 = 3 (binary: 0011)

        8 (binary: 1000) − 1 = 7 (binary: 0111)

    So, subtracting 1 from a power of 2 flips all the bits to the right of the set bit, including the set bit itself.

3. Bitwise AND Operation (&): The bitwise AND operation compares corresponding bits of two numbers and results in 1 only if both bits are 1; otherwise, it results in 0.

    For a power of 2 (n) and n - 1, the bitwise AND will always be 0 because:

    The original number n has only one bit set to 1.
    The number n - 1 has all bits to the right of that bit flipped to 1, and the original bit set to 0.

    Therefore, performing n & (n - 1) will result in 0.

Q. Reverse a integer.

Solution:

```cpp
#include <iostream>
using namespace std;

int reverseInteger(int n) {
    int rev = 0;

    while (n != 0) {
        int lastDigit = n % 10;   // Extract the last digit
        rev = rev * 10 + lastDigit; // Append it to the reversed number
        n /= 10;                  // Remove the last digit from n
    }

    return rev;
}

int main() {
    cout << "Enter a number: ";
    int n;
    cin >> n;

    int reversed = reverseInteger(n);
    cout << "Reversed number: " << reversed << endl;

    return 0;
}
```
