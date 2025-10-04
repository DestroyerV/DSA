#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> arr, int target) // TC: O(log n), SC O(1)
{
    int start = 0, end = arr.size() - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2; // Prevent int overflow

        if (target < arr[mid])
        {
            end = mid - 1;
        }
        else if (target > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            return mid;
        }
    }
    return -1;
}

int recursiveBinarySearch(vector<int> arr, int target, int start, int end) // TC: O(log n), SC O(log n)
{
    int mid = start + (end - start) / 2;

    if (target > arr[mid])
    {
        return recursiveBinarySearch(arr, target, mid + 1, end);
    }
    else if (target < arr[mid])
    {
        return recursiveBinarySearch(arr, target, start, mid - 1);
    }
    else
    {
        return mid;
    }
    return -1;
}

int main()
{
    vector<int> arr = {-1, 0, 3, 4, 5, 9, 12};
    int target = 12;
    int start = 0, end = arr.size() - 1;
    cout << recursiveBinarySearch(arr, target, start, end) << endl;
    return 0;
}