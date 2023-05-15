#include <iostream>
using namespace std;

int findUnique(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int count = 0;
        for (int j = 0; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }

        if (count == 1)
        {
            return arr[i];
        }
    }
    cout << "No unique element found";
    exit(0);
}
int main()
{
    int arr[7] = {3, 7, 2, 2, 7, 3, 4};

    int result = findUnique(arr, 7);
    cout << result;

    return 0;
}