// LC 88

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Time O(m + n)
// Space O(m + n) because of vector nums3 of size m + n
vector<int> merge(vector<int> &nums1, vector<int> &nums2, int m, int n)
{
    int i = 0;
    int j = 0;
    vector<int> nums3;

    while (i < m && j < n)
    {
        if (nums1[i] < nums2[j])
        {
            nums3.push_back(nums1[i]);
            i++;
        }
        else
        {
            nums3.push_back(nums2[j]);
            j++;
        }
    }

    while (i < m)
    {
        nums3.push_back(nums1[i]);
        i++;
    }

    while (j < n)
    {
        nums3.push_back(nums2[j]);
        j++;
    }

    return nums3;
}

// O(1) SC
void optimizeSpace(vector<int> &nums1, vector<int> &nums2, int m, int n)
{
    nums1.resize(m + n);
    int idx = m + n - 1, i = m - 1, j = n - 1;

    while (i >= 0 && j >= 0)
    {
        if (nums1[i] >= nums2[j])
        {
            nums1[idx--] = nums1[i--];
        }
        else
        {
            nums1[idx--] = nums2[j--];
        }
    }

    while (j >= 0)
    {
        nums1[idx--] = nums2[j--];
    }
}
int main()
{
    vector<int> nums1 = {1, 2, 3};
    vector<int> nums2 = {2, 5, 6};
    int m = nums1.size();
    int n = nums2.size();
    // vector<int> nums3 = merge(nums1, nums2, m, n);
    optimizeSpace(nums1, nums2, m, n);

    for (int i = 0; i < nums1.size(); i++)
    {
        cout << nums1[i] << " ";
    }
    cout << endl;

    return 0;
}