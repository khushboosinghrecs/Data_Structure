#include <bits/stdc++.h>
using namespace std;
bool brr[10001][10001];
#define mod 1000000007
long long int fun(int n)
{
    int k = 100000001, l = 1000000001;
    long long int arr[n][n];
    if (brr[0][0] == false)
    {
        return 0;
    }
    for (int i = 0; i < n; i++)
    {
        if (brr[0][i] == false)
        {
            arr[0][i] = 0;
            k = i;
        }
        else if (i > k)
        {
            arr[0][i] = 0;
        }
        else
            arr[0][i] = 1;
    }
    for (int j = 0; j < n; j++)
    {
        if (brr[j][0] == false)
        {
            arr[j][0] = 0;
            l = j;
        }
        else if (j > l)
        {
            arr[j][0] = 0;
        }
        else
            arr[j][0] = 1;
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            if (brr[i][j] == false)
            {
                arr[i][j] = 0;
            }
            else
            {
                arr[i][j] = (arr[i - 1][j] % mod + arr[i][j - 1] % mod) % mod;
            }
        }
    }
    /* for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << '\n';
    }*/
    return arr[n - 1][n - 1];
}
int main()
{
    int n;
    cin >> n;
    char str[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> str[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (str[i][j] == '.')
            {
                brr[i][j] = true;
            }
            else
            {
                brr[i][j] = false;
            }
        }
    }
    cout << fun(n);
    return 0;
}
