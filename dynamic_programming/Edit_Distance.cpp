#include <bits/stdc++.h>
using namespace std;
 
int min(int a, int b, int c) { return min(a, min(b, c)); }
int edit(string s1, string s2, int m, int n)
{
    int dp[m + 1][n + 1];
    for (int i = 0; i <= m; i++)
    {
        dp[i][0] = i;
    }
    for (int i = 0; i <= n; i++)
    {
        dp[0][i] = i;
        /* code */
    }
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (s1[i - 1] == s2[j - 1])
            {
                dp[i][j] = dp[i - 1][j - 1];
            }
            else
            {
                dp[i][j] = min(dp[i][j - 1] + 1, dp[i - 1][j] + 1, dp[i - 1][j - 1] + 1);
            }
        }
    }
    return dp[m][n];
}
int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    int m, n;
    m = s1.length(), n = s2.length();
    cout << edit(s1, s2, m, n);
    return 0;
}
