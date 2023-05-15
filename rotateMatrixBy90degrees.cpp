#include <bits/stdc++.h>
#include <vector>
using namespace std;

void rotate(vector<vector<int>> &matrix)
{
    int n = matrix.size();

    for (int rowIndex = 0; rowIndex < n; rowIndex++)
    {
        for (int colIndex = 0; colIndex < rowIndex; colIndex++)
        {
            swap(matrix[rowIndex][colIndex], matrix[colIndex][rowIndex]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        reverse(matrix[i].begin(), matrix[i].end());
    }
}