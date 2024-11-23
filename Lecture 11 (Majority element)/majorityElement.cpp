// LC 169

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void bruteforce(vector<int> nums) // Big O(n^2)
{
    int n = nums.size();
    for (int val : nums)
    {
        int freq = 0;
        for (int el : nums)
        {
            if (el == val)
            {
                freq++;
            }
        }
        if (freq > n / 2)
        {
            cout << val << endl;
            break;
        }
    }
}

void optimal(vector<int> nums) // Big O(nlogn)
{
    int n = nums.size();

    std::sort(nums.begin(), nums.end());

    int freq = 1, ans = nums[0];

    for (int i = 1; i < n; i++)
    {
        if (nums[i - 1] == nums[i])
        {
            freq++;
        }
        else
        {
            freq = 1;
            ans = nums[i];
        }

        if (freq > n / 2)
        {
            cout << ans << endl;
        }
    }
}

void moorVotingAlgorithm(vector<int> nums) // Big O(n)
{
    int n = nums.size();
    int freq = 0, ans = 0;

    for (int i = 0; i < n; i++)
    {
        if (freq == 0)
        {
            ans = nums[i];
        }

        if (ans == nums[i])
        {
            freq++;
        }
        else
        {
            freq--;
        }
    }

    cout << ans << endl;
}

int main()
{
    vector<int> nums{2, 2, 1, 1, 2};
    moorVotingAlgorithm(nums);
}