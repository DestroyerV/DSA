# Binary

## Two's Complement

It is the medtode to store negative numbers.

### Decimal to Binary

Step 1 : Convert the number into it's usual binary form.

Step 2 : Prefix with a 0 and theis binary is called **MSB**(Most Significant Bit) it will be 0 for positive numbers and 1 for negative.

Step 3 : Take the one's complement (flip the number 0 --> 1 and 1 --> 0).

Step 4 : Add 1 to the one's complement.

Example:

int n = -10
Step 1 : Binary of 10 : 1010
Step 2 : Prefix 0 : 01010
Step 3 : One's complement : 1011
Step 4 : Add 1 : 1011 + 1 = **10110**

## Binary to Decimal

Compiler already know its a -ve number by its MSB.

Step 1 : Convert the two's complement into one's complement means flip the binary.

Step 2 : Add 1 to the one's complement.

Step 3 : Remove the prefix 0.

Example:

Binary: 10110
Step 1 : One's complement : 01001.
Step 2 : Add 1 : 01001 + 1 = 01010.
Step 3 : Remove prefix 0 : **1010** (10).
