#include <iostream>
using namespace std;
void abse(int i)
{
    if (i < 0)
    {
        int j = i * (-1);

        cout << "absolute value of " << i << " is " << j << endl;
    }
}
void abse(float i)
{
    if (i < 0)
    {
        float j = i * (-1);

        cout << "absolute value of " << i << " is " << j << endl;
    }
}
int main()
{
    int i;
    float f;
    cout << "enter value of i" << endl;
    cin >> i;
    cout << endl
         << "enter value of f" << endl;
    cin >> f;
    abse(i);
    abse(f);
}