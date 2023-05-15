#include <iostream>
using namespace std;

void arrayIntersection(int arr1[], int arr2[], int size1, int size2)
{
    cout << "The intersection of the two arrays is:- " << endl;

    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            if (arr1[i] == arr2[j])
            {
                cout << arr2[j] << " ";
            }
        }
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

    int array1[100];
    int array2[100];

    int size1, size2;

    cout << endl;

    cout << "Enter the size of array 1 : ";
    cin >> size1;

    cout << "Enter the size of array 2 : ";
    cin >> size2;

    cout<<endl;

    // Taking elements as input fromm user in array 1
    for (int i = 0; i < size1; i++)
    {
        cout << "Enter the element " << i + 1 << " of array 1 : ";
        cin >> array1[i];
    }

    cout<<endl;

    // Taking elements as input fromm user in array 2
    for (int j = 0; j < size2; j++)
    {
        cout << "Enter the element " << j + 1 << " of array 2 : ";
        cin >> array2[j];
    }

    cout << endl;

    cout << "Array 1:-" << endl;
    displayArray(array1, size1);

    cout << endl;

    cout << "Array 2:-" << endl;
    displayArray(array2, size2);

    cout << endl;

    // Performing intersection operation
    arrayIntersection(array1, array2, size1, size2);

    cout << endl;

    return 0;
}