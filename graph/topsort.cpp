#include <bits/stdc++.h>
using namespace std;
void addedge(int u, int v, vector<int> adj[])
{
    adj[u].push_back(v);
}
void dfsrec(vector<int> adj[], int s, bool visited[], stack<int> &stk)
{
    visited[s] = true;
    for (int u : adj[s])
    {
        if (visited[u] == false)
            dfsrec(adj, u, visited, stk);
    }
    stk.push(s);
}
void dfs(vector<int> adj[], int node)
{
    stack<int> stk;
    bool visited[node];
    for (int i = 0; i < node; i++)
        visited[i] = false;
    for (int i = 0; i < node; i++)
    {
        if (visited[i] == false)
        {
            (dfsrec(adj, i, visited, stk));
        }
    }
    while (stk.empty() == false)
    {
        cout << stk.top() << " ";
        stk.pop();
    }
}
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int edge, node;
    cin >> edge >> node;
    vector<int> adj[node];
    for (int i = 0; i < edge; i++)
    {
        int u, v;
        cin >> u >> v;
        addedge(u, v, adj);
    }
    dfs(adj, node);
}
