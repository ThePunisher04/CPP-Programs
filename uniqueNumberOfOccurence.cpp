#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

bool isUniqueOccurrences(vector<int> &arr)
{
    vector<int> freq;
    int size = arr.size();
    sort(arr.begin(), arr.end());
    int i = 0;
    while (i < size)
    {
        int count = 1;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
            else
            {
                break;
            }
        }
        freq.push_back(count);
        i += count;
    }
    sort(freq.begin(), freq.end());
    for (int i = 0; i < freq.size(); i++)
    {
        if (i + 1 < freq.size())
        {
            if (freq[i] == freq[i + 1])
            {
                return 0;
            }
        }
    }
    return 1;
}

int main()
{
    vector<int> arr = {1, 2, 2, 1, 3, 1};
    bool result = isUniqueOccurrences(arr);
    cout << result;
}