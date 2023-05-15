#include <iostream>
using namespace std;

int addArray(int arr[], int size)
{

    int count = 0;

    for (int i = 0; i < size; i++)
    {
        count = count + arr[i];
    }

    return count;
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
    cout << "Enter the size of the array :" << endl;
    cin >> size;

    cout << "Enter the elements :" << endl;

    for (int i = 0; i < size; i++)
    {
        cout << "Enter element " << i + 1<<" : ";
        cin >> arr[i];
    }

    displayArray(arr, size);

    int length = addArray(arr, size);

    cout << "The sum of the array is :" << length << endl
         << endl;

    return 0;
}