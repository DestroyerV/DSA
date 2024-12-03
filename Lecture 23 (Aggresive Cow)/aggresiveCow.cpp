/*
Assign C cows to N stalls such that min distance between them is largest possible.
Return largest minimum distance.

Example

Input
C = 3
N = 5
arr = [1, 2, 3, 8, 9]

Output: 3

Explanation:
One optimal placement is [1, 3, 6]
Minimum distance between cows is 3

*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isPossible(vector<int> &arr, int N, int C, int minAllowed)
{
    int cows = 1;
    int lastStall = arr[0];

    for (int i = 0; i < N; i++)
    {
        if (arr[i] - lastStall >= minAllowed)
        {
            cows++;
            lastStall = arr[i];
        }

        if (cows == C)
        {
            return true;
        }
    }

    return false;
}

int getDistance(vector<int> &arr, int N, int C)
{
    sort(arr.begin(), arr.end());

    if (C > N)
        return -1;

    int start = 1;
    int end = arr[N - 1] - arr[0];
    int ans = -1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (isPossible(arr, N, C, mid))
        {
            ans = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    return ans;
}

int main()
{
    int N = 5, C = 3;
    vector<int> arr = {1, 2, 3, 8, 4, 9};

    cout << getDistance(arr, N, C) << endl;
    return 0;
}