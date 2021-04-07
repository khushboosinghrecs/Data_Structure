#include <bits/stdc++.h>
using namespace std;
void dfs(vector<int> vrr[], int n, int s);
void add_edge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}
void dfsrec(vector<int> vrr[], int s, bool visited[])
{
    visited[s] = true;
    for (int u : vrr[s])
    {
        if (visited[u] == false)
        {
            dfsrec(vrr, u, visited);
        }
    }
    cout << s << " ";
}
void dfs(vector<int> vrr[], int n)
{
    bool visited[n];
    for (int i = 0; i < n; i++)
    {
        visited[i] = false;
    }
    for (int i = 0; i < n; i++)
    {
        if (visited[i] == false)
        {
            dfsrec(vrr, i, visited);
        }
    }
}
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n, e;
    cin >> n >> e; // n=edge
    vector<int> vr[n];
    for (int i = 0; i < e; i++)
    {
        int u, v;
        cin >> u >> v;
        add_edge(vr, u, v);
    }
    dfs(vr, n);
    return 0;
}