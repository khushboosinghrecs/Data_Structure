#include <bits/stdc++.h>
using namespace std;
void fun(string s, string curr, int i)
{
    if (i > s.length())
    {
        // cout << curr << " ";
        return;
    }
    cout << curr << " ";
    fun(s, curr, i + 1);
    fun(s, curr + s[i], i + 1);
}
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    string s;
    cin >> s;
    fun(s, "", 0);
    return 0;
}
