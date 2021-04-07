#include <bits/stdc++.h>
using namespace std;
#define mod 100000007
long int getcoin(int arr[], int l, int sum)
{
    long int dp[sum + 1][l + 1];
    for (int i = 0; i <= l; i++)
    {
        dp[0][i] = 1;
    }
    for (int i = 0; i <= sum; i++)
    {
        dp[i][0] = 0;
    }
    for (int i = 1; i <= sum; i++)
    {
        for (int j = 1; j <= l; j++)
        {

            dp[i][j] = dp[i][j - 1];
            if (arr[j - 1] <= i)
            {
                dp[i][j] = dp[i][j] + dp[i - arr[j - 1]][j];
            }
        }
    }
    /* for (int i = 0; i <= sum; i++)
    {
        for (int j = 0; j <= l; j++)
        {
            cout << dp[i][j] << "  ";
        }
        cout << '\n';
    }*/

    return dp[sum][l];
}
int main()
{
    int n, Sum;
    cin >> n >> Sum;
    int coin[n];
    for (int i = 0; i < n; i++)
    {
        cin >> coin[i];
    }
    cout << getcoin(coin, n, Sum);
    return 0;
}