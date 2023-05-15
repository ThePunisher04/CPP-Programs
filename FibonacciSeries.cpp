#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << endl;
    cout << "Enter the number of terms :";
    cin >> n;
    cout << endl;
    
    cout << "The Fibonnaci series upto " << n << " terms is :-" << endl;

    int t1 = 0, t2 = 1;
    cout << t1 << " " << t2 << " ";

    for (int i = 0; i < n; i++)
    {
        int nextTerm = t1 + t2;
        cout << nextTerm << " ";
        t1 = t2;
        t2 = nextTerm;
    }
    cout << endl;
    cout << endl;
    return 0;
}