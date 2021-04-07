#include <iostream>
using namespace std;
int fun(int x)
{
    if (x == 0)
    {
        return 0;
    }
    int res = 0;
    res = x + fun(x - 1);
    cout << res << " dfs " << x << '\n';
    return res;
}
int main()
{
    int n;
    cin >> n;
    cout << fun(n);
    return 0;
}