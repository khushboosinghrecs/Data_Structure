#include <bits/stdc++.h>
using namespace std;
int fun(int n, int x, int wt[], int vl[])
{
    int dp[n + 1][x + 1];
    for (int i = 0; i <= n; i++)
        dp[i][0] = 0;
    for (int i = 0; i <= x; i++)
        dp[0][i] = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= x; j++)
        {
            if (wt[i - 1] - j > 0)
                dp[i][j] = dp[i - 1][j];
            else
            {
                dp[i][j] = max((vl[i - 1] + dp[i - 1][j - wt[i - 1]]), dp[i - 1][j]);
            }
        }
    }
    /*for (int i = 0; i <= n; i++)
    {
 
        //cout << i << " i " << '\n';
        for (int j = 0; j <= x; j++)
        {
            cout << dp[i][j] << "  "; // << "   i " << i << "  j   " << j << "   new ,,,,,";
        }
        cout << '\n';
    }*/
    return dp[n][x];
}
int main()
{
    int n, x;
    cin >> n >> x;
    int wt[n], vl[n];
    for (int i = 0; i < n; i++)
    {
        cin >> wt[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> vl[i];
    }
    cout << fun(n, x, wt, vl);
    return 0;
}
