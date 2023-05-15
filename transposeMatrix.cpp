#include <iostream>
using namespace std;

void displayArray(int arr[][3], int row, int col)
{
    cout << "Your array is :-" << endl;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void transpose(int arr[][3], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < i; j++)
        {
            swap(arr[i][j], arr[j][i]);
        }
    }
}

int main()
{
    int arr[3][3] = {
        {22, 34, 54},
        {76, 93, 18},
        {44, 91, 75}};

    cout<<"BEFORE TRANSPOSE"<<endl;
    displayArray(arr, 3, 3);
    transpose(arr, 3, 3);
    cout<<"AFTER TRANSPOSE"<<endl;
    displayArray(arr, 3, 3);

    return 0;
}