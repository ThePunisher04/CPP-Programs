#include <bits/stdc++.h>
#include <vector>
using namespace std;

int compress(vector<char> &chars)
{
    int i = 0;
    int ansIndex = 0;
    int n = chars.size();

    while (i < n)
    {
        int j = i + 1;
        while (j < n && chars[i] == chars[j])
        {
            j++;
        }

        chars[ansIndex] = chars[i];
        ansIndex++;
        int count = j - i;

        if (count > 1)
        {
            string cnt = to_string(count);
            for (char i : cnt)
            {
                chars[ansIndex] = i;
                ansIndex++;
            }
        }
        i = j;
    }
    return ansIndex;
}

int main(){
    vector<char> ch = {'a','a','b','b','b','c','c','c'};
    int len = compress(ch);
    cout<<len<<endl;
    return 0;
}