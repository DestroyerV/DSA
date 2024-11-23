// LC 11

#include <iostream>
using namespace std;

int bruteforce(int heights[], int n) // O(n^2)
{
    int maxArea = 0;
    int width = 0;
    int height = 0;
    int area = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            width = j - i;
            height = min(heights[i], heights[j]);
            area = width * height;
            maxArea = max(area, maxArea);
        }
    }

    return maxArea;
}

int optimal(int heights[], int n) // 2 Pointer Approach
{
    int maxWater = 0;
    int lp = 0, rp = n - 1;

    while (lp < rp)
    {
        int width = rp - lp;
        int height = min(heights[lp], heights[rp]);
        int area = width * height;
        maxWater = max(area, maxWater);
        heights[lp] < heights[rp] ? lp++ : rp--;
    }

    return maxWater;
}

int main()
{
    int heights[] = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int n = sizeof(heights) / sizeof(heights[0]);

    cout << "Bruteforce: " << bruteforce(heights, n) << endl;
    cout << "Optimal: " << optimal(heights, n) << endl;
}