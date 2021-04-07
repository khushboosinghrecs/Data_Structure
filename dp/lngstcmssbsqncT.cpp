#include <bits/stdc++.h>
using namespace std;
int fun(string s1, string s2)
{
    int m, n;
    m = s1.length();
    n = s2.length();

    int memo[m + 1][n + 1];
    for (int i = 0; i <= m; i++)
    {
        memo[0][i] = 0;
    }
    for (int i = 0; i <= n; i++)
    {
        memo[i][0] = 0;
    }
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (s1[i - 1] == s2[j - 1])
            {
                memo[i][j] = 1 + memo[i - 1][j - 1];
            }
            else
            {
                memo[i][j] = max(memo[i - 1][j], memo[i][j - 1]);
            }
        }
    }
    return memo[m][n];
}
int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    int m, n;
    //m = s1.length();
    //n = s2.length();
    cout << fun(s1, s2);
    return 0;
}