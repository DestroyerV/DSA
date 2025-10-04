# Pointers

A pointer is a variable that stores the memory address of another variable, rather than the actual data. This allows for more powerful, flexible, and efficient memory management, especially when dealing with arrays, dynamic memory, and functions.

## Memory Addresses

A memory address is a unique identifier that indicates where data is stored in the computer's memory (RAM). Each byte in memory has a specific address, and this address is used to access or manipulate the data stored at that location.

Memory addresses are usually represented in hexadecimal form (base-16), prefixed with 0x. Each memory address is unique to each variable or allocated block of memory at a particular time.

```cpp
void addressOfVariable()
{
    int a = 1;
    cout << &a << endl;
}
```

## Declaration

```cpp
void pointerDeclaration()
{
    int price = 100;
    int *ptr = &price;
    cout << &price << "  " << ptr << endl;
}
```

## Pointer To Pointer

A pointer can point to another pointer, creating multiple levels of indirection.

```cpp
void pointerToPointer()
{
    int a = 1;
    int *ptr1 = &a;
    int **ptr2 = &ptr1;
    cout << &ptr1 << "  " << ptr2 << endl;
}
```

## Deferencing a Pointer

You can access the value stored at the address a pointer is pointing to by using the * operator (dereferencing).

```cpp
void dereference()
{
    int a = 10;
    int *ptr1 = &a;
    int **ptr2 = &ptr1;
    cout << *ptr1 << "  " << *ptr2 << "  " << **ptr2 << endl;
}
```

## Null Pointer

 A pointer that is not assigned to any valid memory address is called a null pointer. You can assign a null pointer by using nullptr in modern C++.

 ```cpp
 void nullpointer()
{
    int *ptr = nullptr;
    cout << ptr << endl;
}
```

## Pass By Value

In Pass by Value, a copy of the argument is passed to the function. Changes made to the parameter inside the function do not affect the original argument.

The function creates a local copy of the argument, so the original variable remains unchanged.

```cpp
#include <iostream>
using namespace std;

void modifyValue(int x) {
    x = 100; // Changes only the local copy of x
}

int main() {
    int num = 50;
    modifyValue(num); // Pass by value, a copy of num is passed
    cout << "num: " << num << endl; // Original num is unchanged
    return 0;
}
```

## Pass By Reference

In Pass by Reference, the function receives a reference (i.e., the actual memory address) to the original variable. This allows the function to modify the original variable directly.

Instead of creating a copy of the argument, the function uses the original variable’s memory location, so changes made inside the function affect the original variable.

1. By using references (alias)

```cpp
#include <iostream>
using namespace std;

void modifyValue(int& x) {
    x = 100; // Modifies the original variable
}

int main() {
    int num = 50;
    modifyValue(num); // Pass by reference, num is passed directly
    cout << "num: " << num << endl; // Original num is changed
    return 0;
}
```

2. By using Pointers

```cpp
#include <iostream>
using namespace std;

void modifyValue(int* ptr) {
    *ptr = 100; // Modifies the original variable
}

int main() {
    int num = 50;
    modifyValue(&num); // Pass by reference, num is passed directly
    cout << "num: " << num << endl; // Original num is changed
    return 0;
}
```

## Array Pointer

A pointer that points to the first element of an array. Arrays and pointers are closely related, as an array's name itself can act as a pointer to the first element.

```cpp
int arr[5] = {1, 2, 3, 4, 5};
cout << arr; //Array address(by default it is pointer)
int* ptr = arr; // ptr points to the first element of the array
// Accessing elements via pointer
cout << *ptr << endl;       // Output: 1
cout << *(ptr + 1) << endl; // Output: 2
cout << *(ptr + 2) << endl; // Output: 3
```

## Pointer Arithmetic

Operations (like addition or subtraction) that modify the value of a pointer, causing it to point to a different memory location. The result depends on the data type the pointer refers to.

1. Increment (++) and Decrement(--)
    - It Increase and decrease the size of the pointer according to their data type.

    ```cpp
    int a = 10;
    int *ptr = &a;
    cout << ptr << "  ";
    ptr++;
    cout << ptr << a <<  endl;
    ```

2. Addition and Subtraction

    - It increase or decrease the size of the pointer to the number given * it's data type size.

    ```cpp
    int a = 10;
    int *ptr = &a;
    cout << ptr << "  ";
    ptr += 2;
    cout << ptr << endl;
    ```

3. Subtract Pointer

    Pointer subtraction refers to the operation where two pointers are subtracted from each other to find the difference in the number of elements between them. This operation is meaningful only if both pointers point to elements of the same array or contiguous memory block.

    ```cpp
    #include <iostream>

    int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int*ptr1 = &arr[1];  // Points to the second element (20)
    int* ptr2 = &arr[4];  // Points to the fifth element (50)

    // Subtract pointers
    ptrdiff_t diff = ptr2 - ptr1;

    std::cout << "Difference: " << diff << std::endl;  // Outputs: 3
    return 0;
    }

    ```

4. Pointer Comparision

    Pointer comparison in C++ refers to comparing the values stored in two pointers to determine their relative positions in memory or to check if they point to the same location. The comparison can be done using relational operators, such as ==, !=, <, >, <=, and >=.

    ```cpp
    #include <iostream>

    int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int* ptr1 = &arr[1];  // Points to the second element (20)
    int* ptr2 = &arr[4];  // Points to the fifth element (50)

    if (ptr1 == ptr2) {
        std::cout << "Both pointers point to the same element." << std::endl;
    } else {
        std::cout << "Pointers point to different elements." << std::endl;
    }

    if (ptr1 < ptr2) {
        std::cout << "ptr1 points to an earlier element in memory than ptr2." << std::endl;
    }

    return 0;
    }

    ```
