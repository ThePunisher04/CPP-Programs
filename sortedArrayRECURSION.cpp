#include <iostream>
using namespace std;

bool isSorted(int *arr, int size){

    if(size <= 1){
        return true;
    }

    if(arr[0] > arr[1]){
        return false;
    }

    bool ans = isSorted(arr + 1, size - 1);

    return ans;
}


int main(){
    int arr[] = {2,4,6,8,9};

    bool ans = isSorted(arr, 5);
    cout<<ans<<endl;

    return 0;
}