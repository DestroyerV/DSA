#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
    int n = 8;
    int nums[] = {15, -2, 2, -8, 1, 7, 10, 23};

    // BruteForce
    //  TC : O(N)
    //  SC : O(1)

    int maxLength = 0;

    for (int i = 0; i < n; i++)
    {
        int sum = 0;

        for (int j = i; j < n; j++)
        {
            sum += nums[j];

            if (sum == 0)
            {
                maxLength = max(maxLength, j - i + 1);
            }
        }
    }

    cout << maxLength << endl;

    // Optimal (Hashing)
    // TC : O(N)
    // SC : O(N)


    

    return 0;
}