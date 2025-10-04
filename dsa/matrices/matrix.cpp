#include <iostream>
#include <utility>
using namespace std;

// return row and column number of the linear search index using pair ctl
//  maximum row sum
//  maximum column sum

int maxRowSum(int matrix[2][2], int row, int column)
{
    int maxSum = INT_MIN;
    for (int i = 0; i < row; i++)
    {
        int currentSum = 0;
        for (int j = 0; j < column; j++)
        {
            currentSum += matrix[i][j];
        }
        maxSum = max(maxSum, currentSum);
    }
    return maxSum;
}

pair<int, int> linearSearch(int matrix[2][2], int key, int row, int column)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            if (matrix[i][j] == key)
            {
                return pair<int, int>(i, j);
            }
        }
    }
    return pair<int, int>(-1, -1);
}

int main()
{
    int matrix[2][2] = {{1, 2}, {3, 4}};
    int row = 2;
    int column = 2;
    int key = 3;
    // pair<int, int> p1 = linearSearch(matrix, key, row, column);
    // cout << p1.first << " " << p1.second << endl;
    cout << maxRowSum(matrix, row, column) << endl;
    return 0;
}