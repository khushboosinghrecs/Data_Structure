#include <bits/stdc++.h>
using namespace std;
bool bl[5001][5001];
int ans[501][501];
int fun(int a, int b)
{
    if (a == b)
    {
        return 0;
    }
    if (bl[a][b] == true)
    {
        return ans[a][b];
    }
    int res = 10000001;
    for (int i = 1; i < a; i++)
    {
        res = min(res, 1 + fun(i, b) + fun(a - i, b));
    }
    for (int i = 1; i < b; i++)
    {
        res = min(res, 1 + fun(a, i) + fun(a, b - i));
    }
    bl[a][b] = true;
    ans[a][b] = res;
 
    return res;
}
 
int main()
{
    int a, b;
    cin >> a >> b;
    cout << fun(a, b);
    return 0;
}
