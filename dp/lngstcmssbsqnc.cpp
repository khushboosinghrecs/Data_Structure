#include <bits/stdc++.h>
using namespace std;

// Utility function to get the maximum of two and three integers
int min(int a, int b) { return (a < b) ? a : b; }
int min(int a, int b, int c) { return min(a, max(b, c)); }
int fun(string s1, string s2, int m, int n, int memo[10][10])
{
    if (memo[m][n] == -1)
    {
        return memo[m][n];
    }
    if (n == 0 || m == 0)
    {
        memo[m][n] = 0;
    }
    else
    {
        if (s1[m - 1] == s2[n - 1])
        {
            memo[m][n] = 1 + min(s1, s2, m - 1, n - 1, memo);
        }
        else
        {
            return max(fun(s1, s2, m - 1, n, memo), fun(s1, s2, m, n - 1, memo));
        }
    }
    return memo[m][n];
}
int main()
{
    string s1, s2;
    cin >> s1, s2;
    int m, n;
    m = s1.length(), n = s2.length();
    int memo[m + 1][n + 1];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            memo[i][j] = -1;
        }
    }
    cout << fun(s1, s2, m, n, memo);
    return 0;
}