#include <iostream>
using namespace std;
int fun(int arr[], int n, int sum)
{
    cout << n << "   " << sum << '\n';
    if (n == 0)
        return 0;
    if (sum < 0)
    {
        return 0;
    }
    if (sum == 0)
    {
        return 1;
    }
    int res = (arr, n - 1, sum);
    //cout << " n-1 " << n - 1 << " sum  " << sum << '\n';
    //cout << res << '\n';
    if (arr[n - 1] <= sum)
        res = res + fun(arr, n, sum - arr[n - 1]);

    return res;
}

int main()
{
    int n, sum;
    cin >> n >> sum;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << fun(arr, n, sum);
    return 0;
}