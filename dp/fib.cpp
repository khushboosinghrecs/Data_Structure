#include <bits/stdc++.h>
using namespace std;
int fib(int arr[], int n)
{
    int res;
    cout << res << "   ttttt" << '\n';
    if (arr[n] == -1)
    {
        if (n == 1 || n == 0)
        {
            res = n;
        }
        else
        {
            cout << " top " << n << '\n';
            res = fib(arr, n - 1) + fib(arr, n - 2);
            cout << "hello" << '\n';
        }
        arr[n] = res;
    }
    cout << n << "    arr  " << arr[n] << " res  " << res << '\n';
    return arr[n];
}

int main()
{
    int n;
    cin >> n;
    int arr[n + 1];
    for (int i = 0; i <= n; i++)
        arr[i] = -1;
    cout << fib(arr, n);
    return 0;
}