#include <iostream>
using namespace std;
int fun(int sum, int arr[], int n)
{
    if (sum < 0)
        return 0;
    if (sum == 0)
        return 1;
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        res = res + fun(sum - arr[i], arr, n);
    }
    // cout << sum << "  " << res << "  " << '\n';

    return res;
}
int main()
{
    int sum, n;
    cin >> sum >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << fun(sum, arr, n);
    return 0;
}