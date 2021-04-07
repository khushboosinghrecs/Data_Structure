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
    cout << s << " ";
    for (int u : vrr[s])
    {
        if (visited[u] == false)
        {
            dfsrec(vrr, u, visited);
        }
    }
}
void dfs(vector<int> vrr[], int n, int s)
{
    bool visited[n];
    for (int i = 0; i < n; i++)
    {
        visited[i] = false;
    }
    dfsrec(vrr, s, visited);
}
void printedge(vector<int> adj[], int v)
{
    for (int i = 0; i < v; i++)
    {
        for (int x : adj[i])
        {
            cout << x << " ";
        }
        cout << '\n';
    }
}
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    cin >> n; // n=edge
    vector<int> vr[n];
    for (int i = 0; i < n; i++)
    {
        int u, v;
        cin >> u >> v;
        add_edge(vr, u, v);
    }
    int source;
    cin >> source;
    printedge(vr, 5);
    dfs(vr, n, source);
    return 0;
}