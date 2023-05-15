#include <iostream>
using namespace std;

int main()
{
    int amount;
    cout << endl;
    cout << "Enter the amount :";
    cin >> amount;
    cout << endl;

    int rem = amount;

    while (rem != 0)
    {
        if (amount / 100 == 0)
            cout << "The number of Rupee 100 notes you will need is : " << 0 << endl;
        else
        {
            cout << "The number of Rupee 100 notes you will need is : " << amount / 100 << endl;
        }

        rem = rem - (100 * (amount / 100));

        if (rem / 50 == 0)
            cout << "The number of Rupee 50 notes you will need is : " << 0 << endl;
        else
        {
            cout << "The number of Rupee 50 notes you will need is : " << rem / 50 << endl;
        }

        rem = rem - (50 * (rem / 50));

        if (rem / 20 == 0)
            cout << "The number of Rupee 20 notes you will need is : " << 0 << endl;
        else
        {
            cout << "The number of Rupee 20 notes you will need is : " << rem / 20 << endl;
        }

        rem = rem - (20 * (rem / 20));

        if (rem / 1 == 0)
            cout << "The number of Rupee 1 notes you will need is : " << 0 << endl;
        else
        {
            cout << "The number of Rupee 1 notes you will need is : " << rem / 1 << endl;
        }

        rem = rem - (1 * (rem / 1));
    }
    cout << endl;

    return 0;
}