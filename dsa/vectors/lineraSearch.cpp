#include <iostream>
using namespace std;

int linearSearchFn(int arr[], int length, int n)
{
    for (int i = 0; i < length; i++)
    {
        if (arr[i] == n)
        {
            return i;
        }
    }

    return -1;
}

int main()
{
    int arr[] = {2, 8, 9, 7, 3, 4, 5};
    int length = sizeof(arr) / sizeof(arr[0]);

    int result = linearSearchFn(arr, length, 10);
    if (result != -1)
    {
        cout << "Found at index: " << result << endl;
    }
    else
    {
        cout << "Not found" << endl;
    }
    return 0;
}
