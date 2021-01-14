#include <iostream>
#include <algorithm>
#include <set>
#include <vector>
using namespace std;
#define mod 1000000007
bool bl[1000001];
long int ans[1000001];
const int mxn = 100, mx = 1e5;
int dp[mx + 1];
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    dp[0] = 1;
    for (int j = 0; j < n; j++)
    {
        for (int i = mx; i; --i)
        {
            if (i >= arr[j])
            {
                dp[i] = dp[i] + dp[i - arr[j]];
            }
        }
    }
    vector<int> v;
    for (int i = 1; i <= mx; i++)
    {
        if (dp[i])
        {
            v.push_back(i);
        }
    }
    cout << v.size() << '\n';
    for (int s : v)
    {
        cout << s << " ";
    }
    return 0;
}
