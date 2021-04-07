#include <bits/stdc++.h>
using namespace std;
void edge(vector<int> vrr[], int a, int b)
{
    vrr[a].push_back(b);
    vrr[b].push_back(a);
}
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n, e;
    cin >> n >> e;
    vector<int> vrr[n];
    for (int i = 0; i < e; i++)
    {
        int u, v;
        cin >> u >> v;
        edge(vrr, u, v);
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + vrr[i].size();
    }
    cout << sum << '\n';
    return 0;
}