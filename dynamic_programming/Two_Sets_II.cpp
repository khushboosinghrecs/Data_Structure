#include <bits/stdc++.h>
 
using namespace std;
typedef long long int ll;
ll dp[10000001];
bool bl[10000001];
#define mod 1000000007
ll fun(ll arr[], ll sum, ll n)
{
    // cout << sum << "  " << arr[index] << " ind " << index << '\n';
    int res = 0;
    dp[0] = 1;
    for (ll i = 1; i <= n; i++)
    {
        //cout << " index " << i << "\n";
        for (ll j = i * (i + 1) / 2; j >= i; j--)
        {
            //if (j >= arr[i])
            dp[j] = dp[j] % mod + dp[j - i] % mod;
        }
    }
    return (dp[sum] * (mod + 1) / 2) % mod;
}
 
int main()
{
    ll n;
    cin >> n;
    ll arr[n];
    for (ll i = 0; i < n; i++)
        arr[i] = i + 1;
    ll sum = n * (n + 1) / 2;
    if (sum % 2 != 0)
    {
        cout << 0;
        return 0;
    }
 
    cout << fun(arr, sum / 2, n);
 
    return 0;
}
