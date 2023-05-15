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

void insertionSort(int n, vector<int> &arr){
    // Write your code here.
    for(int i=1 ; i<n ; i++){
        int element = arr[i];
        int j=i-1;
        for(j;j>=0;j--){
            if(element < arr[j]){
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1]=element;
    }
}

int main(){
    vector<int> arr = {6,5,4,3,2,1};
    insertionSort(6,arr);
    displayArray(arr,6);
}