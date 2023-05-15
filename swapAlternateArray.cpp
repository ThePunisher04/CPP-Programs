#include <iostream>
using namespace std;

void swapAlternateArray(int arr[], int size)
{
    int behind = 0;
    int ahead = 1;

    while (ahead <= size - 1)
    {
        swap(arr[behind], arr[ahead]);
        behind += 2;
        ahead += 2;
    }
}
//OR
void swapAlternate(int arr[], int size)
{
    for (int i = 0; i < size ; i+=2)
    {
        if (i + 1 < size)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
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

    // Before swapping alternate positions
    cout << "Before swapping alternate positions" << endl;
    displayArray(arr, size);

    cout << endl;

    // After swapping alternate positions
    cout << "After swapping alternate positions" << endl;
    swapAlternate(arr, size);
    displayArray(arr, size);

    cout << endl;
}