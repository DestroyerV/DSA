// LC 852

// 1. Linear search O(n)
// 2. Binary Search O(logn)

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {0, 3, 8, 9, 5};
    // Peak element is never at 0th and last index because it is given in question that it is a mountain array and mountain array is always increasing and then decreasing so peak element is always present in the middle of the array and minimum length of array is 3.
    int start = 1;
    int end = arr.size() - 2;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1])
        {
            cout << arr[mid] << endl;
            break;
        }
        else if (arr[mid] < arr[mid + 1])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return -1;
}