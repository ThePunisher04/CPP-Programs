#include <bits/stdc++.h>
#include <vector>
using namespace std;

int rowWithMax1s(vector<vector<int>> arr, int n, int m)
{
    // code here

    int col = m - 1;

    int ansRowIndex = -1;

    for (int row = 0; row < n; row++)
    {

        while (col >= 0 && arr[row][col] == 1)
        {
            col--;
            ansRowIndex = row;
        }
    }

    return ansRowIndex;
}