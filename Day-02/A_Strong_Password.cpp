#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.size();
        long long max_time = 0;
        string best_str = s;
        for (int pos = 0; pos <= n; pos++)
        {
            for (char c = 'a'; c <= 'z'; c++)
            {
                string temp = s;
                temp.insert(pos, 1, c);
                long long time = 2;
                for (int i = 1; i < temp.size(); i++)
                {
                    if (temp[i] == temp[i - 1])
                        time += 1;
                    else
                        time += 2;
                }
                if (time > max_time)
                {
                    max_time = time;
                    best_str = temp;
                }
            }
        }
        cout << best_str << endl;
    }
    return 0;
}
