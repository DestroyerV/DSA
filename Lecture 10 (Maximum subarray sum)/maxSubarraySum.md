# Maximum Sub Array

## What is a Subarray?

A subarray is simply a part of an array. It consists of consecutive elements from the original array.

**Example:** `[3,5,1,4,2]`

Some possible subarrays are:

- `[3]` (just the first element)

- `[5, 1]` (starting from the second element)

- `[1, 4, 2]` (starting from the third element)

- `[3, 5, 1, 4, 2]` (the entire array)

A subarray always takes a "slice" from the array without skipping elements between them.

### Formula for the Number of Subarrays

For an array of size `n`, the total number of possible subarrays is given by:

$\text{Number of subarrays} = \frac{n(n+1)}{2}$

---

### Printing All Subarrays

The following C++ code prints all subarrays of an array `vec` of size `n`:

```cpp
for (int st = 0; st < n; st++) {
    for (int end = st; end < n; end++) {
        for (int i = st; i <= end; i++) {
            cout << vec[i] << " ";
        }
        cout << endl;
    }
}
```

## Sum of Maximum Sub Array

### Brute Force

```cpp
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main()
{

    vector<int> vec{1, 2, 3, 4, 5};

    int n = vec.size();

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

    return 0;
}
```

### Kadane's Algorithm

Kadane's Algorithm is an efficient way to find the maximum sum of a contiguous subarray in a one-dimensional array of numbers (which can be both positive and negative). The algorithm works in O(n) time, where n is the number of elements in the array.

> :bulb: **Key Idea:** Instead of calculating the sum for every possible subarray, Kadane's Algorithm keeps track of the current subarray sum and global maximum sum while iterating through the array.

```cpp
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int kadaneMaxSubArray(vector<int>& vec) {
    int currentSum = 0;
    int maxSum = INT_MIN;  // Smallest possible value to start with

    for (int i = 0; i < vec.size(); i++) {
        currentSum += vec[i];

        if (currentSum > maxSum) {
            maxSum = currentSum;
        }

        // If the current sum becomes negative, reset it to 0
        if (currentSum < 0) {
                currentSum = 0;
        }
    }

    return maxSum;
}

int main() {
    vector<int> vec = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

    int maxSum = kadaneMaxSubArray(vec);
    cout << "Maximum subarray sum is: " << maxSum << endl;

    return 0;
}
```
