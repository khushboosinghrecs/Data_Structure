#include <iostream>
using namespace std;
int max(int a, int b) { return (a > b) ? a : b; }
int max(int a, int b, int c) { return max(a, max(b, c)); }
int fun(int n)
{
    //cout << " first call " << n << '\n';
    if (n == 0 || n == 1)
    {
        cout << " n " << n << " in if" << '\n';
        return 0;
    }
    int m = 0;
    for (int i = 1; i < n; i++)
    {
        //   cout << " i  " << i << "  n   " << n << "  m  " << m << '\n';
        /// cout << n - i << '\n';
        m = max(m, (n - i) * i, fun(n - i) * i);
    }
    cout << m << " last  " << '\n';
    return m;
}
int main()
{
    int n;
    cin >> n;
    cout << fun(n);
    return 0;
}