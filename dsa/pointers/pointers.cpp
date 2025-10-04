#include <iostream>

using namespace std;

void addressOfVariable()
{
    int a = 1;
    cout << &a << endl;
}

void pointerDeclaration()
{
    int price = 100;
    int *ptr = &price;
    cout << &price << "  " << ptr << "  " << &ptr << endl;
}

void pointerToPointer()
{
    int a = 1;
    int *ptr1 = &a;
    int **ptr2 = &ptr1;
    cout << &ptr1 << "  " << ptr2 << endl;
}

void dereference()
{
    int a = 10;
    int *ptr1 = &a;
    int **ptr2 = &ptr1;
    cout << *ptr1 << "  " << *ptr2 << "  " << **ptr2 << endl;
}

void nullpointer()
{
    int *ptr = nullptr;
    cout << ptr << endl;
}

void pointerAithematic()
{
    // Increment and Decrement

    // int a = 10;
    // int *ptr = &a;
    // cout << ptr << "  ";
    // ptr++;
    // cout << ptr  << endl;

    // Add and Sub
    int a = 10;
    int *ptr = &a;
    cout << ptr << "  ";
    ptr += 2;
    cout << ptr << endl;
}

void ptrSubtr () {
    int *ptr2; //100
    int *ptr1 = ptr2 +2; //108

    cout << ptr1 - ptr2 << endl; //2 Int
}

int main()
{
    addressOfVariable();
    pointerDeclaration();
    pointerToPointer();
    dereference();
    nullpointer();
    pointerAithematic();
    return 0;
}