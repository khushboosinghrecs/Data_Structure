#include <bits/stdc++.h>
using namespace std;
typedef int i;
long long int dp[5001][5001];
long long int fun(long long int l, long long int r, long long int arr[], long long int sum)
{
	if (r < l)
	{
		return 0;
	}
	if (l + 1 == r)
	{
		return max(arr[l], arr[r]);
	}
	if (dp[l][r] != -1)
	{
		return dp[l][r];
	}
	long long int res = 0;
	res = max(sum - fun(l + 1, r, arr, sum - arr[l]), sum - fun(l, r - 1, arr, sum - arr[r]));
	dp[l][r] = res;
	return res;
}
int main()
{
 
	long long int n;
	cin >> n;
	long long int arr[n];
	for (long long int l = 0; l < n; l++)
	{
		cin >> arr[l];
	}
	long long int sum = 0;
	for (long long int i = 0; i < n; i++)
	{
		sum = sum + arr[i];
	}
	for (long long int i = 0; i < 5001; i++)
	{
		for (int j = 0; j < 5001; j++)
		{
			dp[i][j] = -1;
		}
	}
	cout << fun(0, n - 1, arr, sum) << '\n';
}
