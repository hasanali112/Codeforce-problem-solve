#include <bits/stdc++.h>
using namespace std;
int main()
{
    int val;
    cin >> val;
    int cnt_pp = 0;
    int cnt_mm = 0;
    while (val--)
    {
        string s;
        cin >> s;
        if (s == "++X" || s == "X++")
        {
            cnt_pp++;
        }
        else if (s == "--X" || s == "X--")
        {
            cnt_mm++;
        }
    }

    cout << cnt_pp - cnt_mm << endl;
    return 0;
}