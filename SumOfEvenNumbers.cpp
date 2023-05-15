#include <iostream>
using namespace std;

int main()
{
    int n, i = 2, sum = 0;
    cout << "Enter a number :";
    cin >> n;

    while (i <= n)
    {

        sum = sum + i;
        i = i + 2;
    }

    cout << "The sum of even numbers from 1 to "<<n<<" is "<<sum;
    cout << endl;
    return 0;
}