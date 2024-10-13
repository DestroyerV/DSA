#include <iostream>

bool isUnique(int arr[], int size, int index)
{
    for (int i = 0; i < index; i++)
    {
        if (arr[i] == arr[index])
        {
            return false; // Value already found earlier
        }
    }
    return true;
}

int main()
{
    int arr[] = {10, 20, 10, 30, 40, 50, 40, 30};
    int size = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Unique values: ";
    for (int i = 0; i < size; i++)
    {
        if (isUnique(arr, size, i))
        {
            std::cout << arr[i] << " ";
        }
    }
    std::cout << std::endl;

    return 0;
}
