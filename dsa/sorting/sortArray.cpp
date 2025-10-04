// LC 75

#include <iostream>
#include <vector>
using namespace std;

// O(n^2)
void insertionSort(vector<int> &arr, int n)
{
    for (int i = 1; i < n; i++)
    {
        int current = arr[i];
        int previous = i - 1;

        while (previous >= 0 && arr[previous] > current)
        {
            arr[previous + 1] = arr[previous];
            previous--;
        }
        arr[previous + 1] = current;
    }
}

// O(2n)
void countSort(vector<int> &arr, int n)
{
    int count0 = 0, count1 = 0, count2 = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
            count0++;
        else if (arr[i] == 1)
            count1++;
        else
            count2++;
    }

    int idx = 0;

    for (int i = 0; i < count0; i++)
    {
        arr[idx] = 0;
        idx++;
    }

    for (int i = 0; i < count1; i++)
    {
        arr[idx] = 1;
        idx++;
    }

    for (int i = 0; i < count2; i++)
    {
        arr[idx] = 2;
        idx++;
    }
}

// Dutch National Flag Algorithm
// O(n)
void dnf(vector<int> &arr, int n)
{
    int low = 0;
    int mid = 0;
    int high = n - 1;

    while (mid <= high)
    {
        if (arr[mid] == 0)
        {
            swap(arr[mid], arr[low]);
            low++;
            mid++;
        }
        else if (arr[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}

int main()
{
    vector<int> arr = {2, 0, 2, 1, 1, 0};
    int n = arr.size();
    dnf(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}