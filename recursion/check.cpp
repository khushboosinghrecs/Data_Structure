#include <iostream>
using namespace std;
int fun(int arr[], int n)
{
    //cout << n << "   " << sum << '\n';
    cout << n << '\n';
    if (n == 0)
        return 0;
    int res; // = (arr, n - 1);
    res = arr[n - 1] + fun(arr, n - 1);

    return res;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << fun(arr, n);
    return 0;
}