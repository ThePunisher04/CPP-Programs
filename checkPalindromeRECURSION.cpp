#include <iostream>
using namespace std;

bool isPalindrome(string str, int i, int j)
{
    if(i>j){
        return true;
    }
    if(str[i] != str[j]){
        return false;
    }

    isPalindrome(str,i+1,j-1);
}

int main()
{
    string str = "abbccbba";
    bool ans = isPalindrome(str, 0, str.length() - 1);
    if (ans)
    {
        cout << "is palindrome" << endl;
    }
    else
    {
        cout << "not a palindrome" << endl;
    }
}