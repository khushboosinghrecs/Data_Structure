#include <iostream>
using namespace std;
int fun(int n)
{
    if (n == 0)
        return 0;
    int res;
    res = n + fun(n - 1);
    cout << res << "  " << n << '\n';
    return res;
}
int main()
{
    int n;
    cin >> n;
    cout << fun(n);
    return 0;
}