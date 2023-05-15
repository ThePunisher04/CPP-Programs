#include <iostream>

using namespace std;
long long pow(int a, int b){
    long long result = 1;
    for(int i=0; i<b; i++){
        result *= a;
    }
    return result;
}
int main()
{
    int n;
    cout << "Enter a number :";
    cin >> n;
    int ans = 0;
    int i = 0;

    while (n != 0)
    {
        int bit = n & 1;
        ans = (bit * pow(10, i)) + ans;
        n = n >> 1;
        i++;
    }
    cout << ans;
}