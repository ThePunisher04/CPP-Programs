#include <iostream>
using namespace std;

int findDuplicate(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        int count = 0;
        for (int j = 0; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        
        if(count != 1){
            return arr[i];
        }
    }
}

int main(){
    int arr[5]={1,2,3,4,3};
    int result = findDuplicate(arr,5);
    cout<<result;
    return 0;
}