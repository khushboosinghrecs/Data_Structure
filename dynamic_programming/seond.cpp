#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
bool done[1000001];
int counntfun[10000001];
int fun(int n, int arr[], int sum)
{
    if (sum == 0)
    {
        return 0;
    }
    if (done[sum] == true)
        return counntfun[sum];
    int res = 10000001;
    for (int i = 0; i < n; i++)
    {
        if (sum >= arr[i])
        {
 
            res = min(res, (fun(n, arr, sum - arr[i]) + 1));
        }
    }
    done[sum] = true;
    counntfun[sum] = res;
    return res;
}
int main()
{
    int n, sm;
    cin >> n >> sm;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    long long int x = fun(n, arr, sm);
    if (x == 10000001)
        cout << -1 << endl;
    else
        cout << x << endl;
    return 0;
}
