#include <iostream>
#include <vector>
#include <climits>
using namespace std;

vector<int> vec{3, 5, 1, 4, 2};
int n = vec.size();

void printSubArray()
{
    for (int st = 0; st < n; st++)
    {
        for (int end = st; end < n; end++)
        {
            for (int i = st; i <= end; i++)
            {
                cout << vec[i];
            }
            cout << " ";
        }
        cout << endl;
    }
}

void bruteForceMaxSum()
{

    int maxSum = INT_MIN;

    for (int st = 0; st < n; st++)
    {
        int currSum = 0;
        for (int end = st; end < n; end++)
        {
            currSum += vec[end];
            maxSum = max(currSum, maxSum);
        }
    }

    cout << maxSum << endl;
}

void kadanAlgo()
{
    int maxSum = INT_MIN;
    int currSum = 0;

    for (int i = 0; i < n; i++)
    {
        currSum += vec[i];
        maxSum = max(currSum, maxSum);

        if (currSum < 0)
        {
            currSum = 0;
        }
    }
    cout << maxSum;
}

int main()
{
    // cout << "All Sub Arrays: " << endl;
    // printSubArray();

    // cout << "Max sum of sub arrays: ";
    // bruteForceMaxSum();

    std::cout << "Optimized: ";
    kadanAlgo();
}
