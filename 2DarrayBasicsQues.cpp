#include <iostream>
using namespace std;

void display(int arr[3][3], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int largestRowIndex(int arr[][3], int row, int col)
{
    int maxi = -1;
    int rowIndex = -1;

    for (int i = 0; i < row; i++)
    {
        int sum = 0;
        for (int j = 0; j < col; j++)
        {
            sum += arr[i][j];
        }
        
        if (sum > maxi)
        {
            maxi = sum;
            rowIndex = row;
        }
    }
    cout << "Maximum sum is " << maxi << endl;
    return rowIndex;
}

void rowSum(int arr[][3], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        int sum = 0;
        for (int j = 0; j < col; j++)
        {
            sum += arr[i][j];
        }
        cout << sum << endl;
    }
}

void colSum(int arr[][3], int row, int col)
{
    for (int i = 0; i < col; i++)
    {
        int sum = 0;
        for (int j = 0; j < row; j++)
        {
            sum += arr[j][i];
        }
        cout << sum << endl;
    }
}

bool isPresent(int arr[3][3], int target, int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] == target)
            {
                return 1;
            }
        }
    }
    return 0;
}

int main()
{
    int arr[3][3] = {{3, 4, 11}, {2, 12, 1}, {7, 8, 7}};

    // int row, col;

    // cout<<"Enter rows and columns :";
    // cin>>row>>col;

    // for(int i=0 ; i<3 ; i++){
    //     for(int j=0 ; j<3 ; j++){
    //         cout<<"Enter element "<<i<<" "<<j<<" : ";
    //         cin>>arr[i][j];
    //     }
    // }

    display(arr, 3, 3);

    // int target;
    // cout<<"Enter element to be found :";
    // cin>>target;

    // if(isPresent(arr,target,3,3)){
    //     cout<<"Element found"<<endl;
    // }
    // else{
    //     cout<<"Not found"<<endl;
    // }

    // rowSum(arr,3,3);
    // colSum(arr,3,3);
    int largeRow = largestRowIndex(arr, 3, 3);
    cout << "Maximum row is at index : " << largeRow << endl;
}