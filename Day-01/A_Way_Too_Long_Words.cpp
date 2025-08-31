#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int val;
    cin >> val;
    while (val--)
    {
        string s;
        cin >> s;
        long long int leng = s.size();
        if (leng > 10)
        {
            cout << s[0];
            cout << leng - 2;
            cout << s[leng - 1];
            cout << endl;
        }
        else
        {
            cout << s << endl;
        }
    }

    return 0;
}