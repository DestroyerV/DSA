#include <iostream>
using namespace std;

// LC 238

int *bruteforce(int nums[], int n)
{
    int *ans = new int[n];

    for (int i = 0; i < n; i++)
    {
        int product = 1;
        for (int j = 0; j < n; j++)
        {
            if (i != j)
            {
                product *= nums[j];
            }
        }
        ans[i] = product;
    }
    return ans;
}

int *optimal(int nums[], int n)
{
    int *ans = new int[n];
    for (int i = 0; i < n; i++)
    {
        ans[i] = 1;
    }

    for (int i = 1; i < n; i++)
    {
        ans[i] = ans[i - 1] * nums[i - 1];
    }

    int suffix = 1;
    for (int i = n - 1; i >= 0; i--)
    {
        ans[i] *= suffix;
        suffix *= nums[i];
    }

    return ans;
}

int main()
{
    int nums[] = {1, 2, 3, 4};
    int n = sizeof(nums) / sizeof(nums[0]);
    int *result = optimal(nums, n);
    for (int i = 0; i < n; i++)
    {
        cout << result[i] << " ";
    }
    delete[] result;
    return 0;
}
