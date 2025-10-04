// LC 33

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums = {3, 4, 5, 6, 7, 0, 1, 2};
    int target = 0;
    int start = 0;
    int end = nums.size() - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (nums[mid == target])
            cout << mid << endl;

        if (nums[start] <= nums[mid]) // Left side sorted
        {
            if (nums[start] <= target && target <= nums[mid])
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
        else // Right sorted
        {
            if (nums[mid] <= target && target <= nums[end])
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
    }

    return -1;
}