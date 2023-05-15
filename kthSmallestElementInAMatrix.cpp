#include <bits/stdc++.h>
#include <limits.h>
#include <iostream>
using namespace std;

int kthSmallest(int mat[MAX][MAX], int n, int k)
{
    // Your code here
    int start = mat[0][0];
    int end = mat[n - 1][n - 1];
    int mid = start + (end - start) / 2;

    while (start <= end)
    {

        int count = 0;

        for (int row = 0; row < n; row++)
        {

            int low = 0;
            int high = n - 1;
            int centre = low + (high - low) / 2;

            while (low <= high)
            {

                if (mat[row][centre] <= mid)
                {
                    low = centre + 1;
                }
                else
                {
                    high = centre - 1;
                }
                centre = low + (high - low) / 2;
            }

            count = count + low;
        }

        if (count < k)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }

    return start;
}