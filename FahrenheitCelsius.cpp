#include <iostream>
using namespace std;

int main()
{
    float c1, c2, f1, f2;
    cout << endl;

    cout << "Enter the temperature in celsius : ";
    cin >> c1;
    f1 = ((9.0 / 5.0) * c1) + 32.0;
    cout << "Corresponding value in fahrenheit is : " << f1 << endl;

    cout << endl;

    cout << "Enter the temperature in fahrenheit : ";
    cin >> f2;
    c2 = (f2 - 32.0) * (5.0 / 9.0);
    cout << "Corresponding value in celsius is : " << c2 << endl;

    cout << endl;
    return 0;
}