#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;

    int cnt = 0;
    for (int i = 0; i < s.size(); i++)
    {
        for (int j = i; j < s.size(); j++)
        {
            if (i == j)
                continue;
            else
            {
                if (s[i] == s[j])
                    cnt++;
            }
        }
    }

    int distinct = (int)s.size() - cnt;
    if (distinct % 2 == 0)
        cout << "CHAT WITH HER!" << endl;
    else
        cout << "IGNORE HIM!" << endl;

    return 0;
}