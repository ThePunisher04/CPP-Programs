#include <iostream>
using namespace std;

int main()
{

    uint32_t n;
    cout << endl;
    cout << "Enter a decimal number :";
    cin >> n;

    int count = 0;

    while (n != 0)
    {
        if (n & 1)
        {
            count++;
        }
        n = n >> 1;
    }
    cout << "The number of 1's bits in " << n << " is " << count << endl;
    cout << endl;
}