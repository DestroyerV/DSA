// Same Approach of Book Allocation Problem

#include <iostream>
#include <vector>
using namespace std;

bool isValid(vector<int> &arr, int n, int m, int maxAllowed)
{
    int painter = 1;
    int length = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > maxAllowed)
        {
            return false;
        }

        if (length + arr[i] <= maxAllowed)
        {
            length += arr[i];
        }
        else
        {
            painter++;
            length = arr[i];
        }
    }

    return painter > m ? false : true;
}

int painterPartition(vector<int> &arr, int n, int m)
{
    if (m > n)
        return -1;

    // All possible solution
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    int ans = -1;
    int start = 0;
    int end = sum;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (isValid(arr, n, m, mid))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }

    return ans;
}

int main()
{
    vector<int> arr = {40, 30, 10, 20};
    int n = 4;
    int m = 2;

    cout << painterPartition(arr, n, m) << endl;
    return 0;
}