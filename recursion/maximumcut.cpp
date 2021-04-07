#include <iostream>
#include <algorithm>
using namespace std;
int max(int a, int b) { return (a > b) ? a : b; }
int max(int a, int b, int c) { return max(a, max(b, c)); }
int fun(int n, int a, int b, int c)
{
    cout << n << " a   " << a << " b   " << b << " c  " << c << '\n'; // << "res  " << res << '\n';
    cout << "hello" << '\n';
    if (n < 0)
    {
        return -1;
    }
    if (n == 0)
        return 0;
    int res = max(fun(n - a, a, b, c), fun(n - b, a, b, c), fun(n - c, a, b, c));
    cout << n << " a   " << a << " b   " << b << " c  " << c << "res  " << res << '\n';
    if (res == -1)
    {

        cout << res << "   " << n << '\n';
        return res;
    }
    else
    {
        return res + 1;
    }
}
int main()
{
    int n, a, b, c;
    cin >> n >> a >> b >> c;
    cout << fun(n, a, b, c);
    return 0;
}