#include <bits/stdc++.h>
using namespace std;
int ceilidx(int tail[], int l, int r, int x)
{
    while (r > l)
    {
        int m = l + (r - l) / 2;
        if (tail[m] >= x)
            r = m;
        else
            l = m + 1;
    }
 
    return r;
}
int fun(int arr[], int n)
{
    int tail[n], len = 1;
    tail[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > tail[len - 1])
        {
            tail[len] = arr[i];
            len++;
        }
        else
        {
            int c = ceilidx(tail, 0, len - 1, arr[i]);
            tail[c] = arr[i];
        }
    }
    return len;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << fun(arr, n);
    return 0;
}
