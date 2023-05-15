#include <iostream>
using namespace std;

int countWays(int stairs){
    if(stairs < 0){
        return 0;
    }
    if(stairs == 0){
        return 1;
    }

    int ways = countWays(stairs - 1) + countWays(stairs - 2);

    return ways;
}


int main(){

    int n;
    cout<<"enter stairs : ";
    cin>>n;

    int ans = countWays(n);
    cout<<ans<<endl;
    
    return 0;
}