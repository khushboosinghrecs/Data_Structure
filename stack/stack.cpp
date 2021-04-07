#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<int> stk;
    int a[] = {12, 3, 3, 44, 5, 6};
    int n = sizeof(a) / sizeof(a[0]);
    cout << n;
    for (int i = 0; i < n; i++)
    {
        stk.push({a[i]});
    }
    while (!stk.empty())
    {
        cout << ' ' << stk.top();
        stk.pop();
    }
    return 0;
}