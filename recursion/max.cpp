#include <iostream>
using namespace std;
int fun(int x)
{
    if (x == 0)
        return 0;
    return (max(fun(x - 1), fun(x - 2)));
}
int main()
{
    int n;
    cin >> n;
    cout << fun(n);
    return 0;
}