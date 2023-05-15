#include <bits/stdc++.h>
#include <vector>
using namespace std;

void display(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void moveZeroes(vector<int> &arr, int n){

    int nonZero = 0;
    for(int j=0 ; j<n ; j++){
        if(arr[j]!=0){
        swap(arr[j],arr[nonZero]);
        nonZero++;
        }
    }
    
}

int main(){
    vector<int> arr = {0,1,0,3,12,0};

    moveZeroes(arr,6);

    display(arr);

    return 0;
}
    
