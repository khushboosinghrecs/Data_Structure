#include <bits/stdc++.h>
using namespace std;
const int mxn = 1e6;
long long int dp[mxn + 1];
 
long long int getcoin(int arr[], int l, int sum)
{
    dp[0] = 1;
    for (int i = 0; i < l; i++)
    {
        for (int j = 1; j <= sum; j++)
        {
            if (arr[i] <= j)
            {
                dp[j] = (dp[j] + dp[j - arr[i]]) % 1000000007;
            }
        }
    }
    return dp[sum];
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
