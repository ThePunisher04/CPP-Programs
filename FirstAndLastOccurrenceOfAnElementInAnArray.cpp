#include <iostream>
using namespace std;

int firstOccurrence(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int ans = -1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (key == arr[mid])
        {
            ans = mid;
            end = mid - 1;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }

    return ans;
}

int lastOccurrence(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int ans = -1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (key == arr[mid])
        {
            ans = mid;
            start = mid + 1;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }

    return ans;
}

int main()
{
    int arr[7] = {1, 2, 3, 3, 3, 3, 5};
    int first = firstOccurrence(arr, 7, 3);
    int last = lastOccurrence(arr, 7, 3);

    cout << "First Occurence of 3 is at index " << first << endl;
    cout << "Last Occurence of 3 is at index " << last << endl;

    return 0;
}
