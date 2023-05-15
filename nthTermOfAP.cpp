#include <iostream>
using namespace std;

int generalTerm(int a, int d, int n)
{
    int t;
    t = a + (n - 1) * d;
    return t;
}
int main()
{
    int firstTerm, commonDifference, termNumber;

    cout << endl;

    cout << "Enter the first term of the AP : ";
    cin >> firstTerm;

    cout << "Enter the common difference of the AP : ";
    cin >> commonDifference;

    cout << "Enter the term number : ";
    cin >> termNumber;

    cout << endl;
    
    int ans = generalTerm(firstTerm, commonDifference, termNumber);
    cout << "The term " << termNumber << " of the the AP is : " << ans << endl;
    cout << endl;
    return 0;
}