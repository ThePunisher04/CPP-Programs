#include <iostream>
using namespace std;

void tripletSum(int arr[], int size)
{
    cout << "The triplet sum of the given array is:" << endl;

    int behind = 0;
    int mid = 1;
    int ahead = 2;

    while (ahead <= size - 1)
    {
        cout << arr[behind] + arr[ahead] + arr[mid] << " ";
        behind += 3;
        mid += 3;
        ahead += 3;
    }
    cout << endl;
}

void displayArray(int arr[], int size)
{
    cout << "Your array is :-" << endl;

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[100];
    int size;

    cout << endl;

    cout << "Enter the size of the array : ";
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        cout << "Enter element " << i + 1 << " : ";
        cin >> arr[i];
    }

    cout << endl;

    displayArray(arr, size);

    cout << endl;

    tripletSum(arr, size);

    cout << endl;
    
    return 0;
}