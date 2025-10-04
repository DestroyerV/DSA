#include <iostream>
using namespace std;

void reverse(int arr[], int length)
{
    for (int i = 0; i < length / 2; i++)
    {
        int temp = arr[length - i - 1];
        arr[length - i - 1] = arr[i];
        arr[i] = temp;
    }
}

int main()
{
    int arr[] = {
        1,
        2,
        3,
        4,
        5,
    };
    int length = sizeof(arr) / sizeof(arr[0]);
    reverse(arr, length);
    cout << "Reversed array: ";
    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}