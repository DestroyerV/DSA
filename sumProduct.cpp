#include <iostream>
using namespace std;

int sumOfArray(int arr[], int length)
{
    int sum = 0;
    for (int i = 0; i < length; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int productOfArray(int arr[], int length)
{
    int product = 1;
    for (int i = 0; i < length; i++)
    {
        product *= arr[i];
    }
    return product;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int length = sizeof(arr) / sizeof(arr[0]);
    cout << "Sum: " << sumOfArray(arr, length) << ", Product: " << productOfArray(arr, length) << endl;
    return 0;
}