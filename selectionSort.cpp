#include <bits/stdc++.h>
#include <vector>
using namespace std;

void displayArray(vector<int> &arr, int size)
{

    cout << "Your array is :-" << endl;

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void selectionSort(vector<int>& arr, int n)
{   
    // Write your code here.
    for(int i = 0 ; i < n ; i++){
        int minIndex = i;
        for(int j = i + 1 ; j < n ; j++){
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }
        swap(arr[i],arr[minIndex]);
    }
}

int main(){
    vector<int> arr = {6,5,4,3,2,1};
    selectionSort(arr,6);
    displayArray(arr,6);
}