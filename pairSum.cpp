#include <iostream>
using namespace std;

void pairSum(int arr[], int key)
{
    int size = 5;
    for (int i = 0; i < size; i++)
    {
        int element = arr[i];
        for (int j = 0; j < size; j++)
        {
            if (element + arr[j] == key)
            {
                if (arr[i] < arr[j])
                {
                    cout << arr[i] << " " << arr[j];
                }
            }
        }
        cout << endl;
    }
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    pairSum(arr, 5);

    return 0;
}