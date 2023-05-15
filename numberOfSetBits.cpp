#include <iostream>
using namespace std;

int setBits(int x)
{
    int count = 0;
    while (x != 0)
    {
        if (x & 1 == 1)
        {
            count++;
        }
        x = x >> 1;
    }
    return count;
}
int main()
{
    int a, b;
    cout << "Enter the value of a : ";
    cin >> a;
    cout << "Enter the value of b : ";
    cin >> b;

    int count1 = setBits(a), count2 = setBits(b);

    cout << "The total number of set bits present in " << a << " and " << b << " is : " << count1 + count2 << endl;

    return 0;
}