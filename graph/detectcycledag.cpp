#include <bits/stdc++.h>
using namespace std;
void addedge(int u, int v, vector<int> adj[])
{
    adj[u].push_back(v);
}
bool dfsrec(vector<int> adj[], int s, bool visited[], bool rcrsnstk[])
{
    visited[s] = true;
    rcrsnstk[s] = true;
    for (int u : adj[s])
    {
        if (visited[u] == false && dfsrec(adj, u, visited, rcrsnstk))
            return true;
        else if (rcrsnstk[u] == true)
        {
            return true;
        }
    }
    rcrsnstk[s] = false;
    return false;
}
bool dfs(vector<int> adj[], int node)
{
    bool visited[node];
    bool recursionstack[node];
    for (int i = 0; i < node; i++)
        visited[i] = false;
    for (int i = 0; i < node; i++)
        recursionstack[i] = false;
    for (int i = 0; i < node; i++)
    {
        if (visited[i] == false)
        {
            if (dfsrec(adj, i, visited, recursionstack) == true)
                return true;
        }
    }
    return false;
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
    if (dfs(adj, node) == true)
    {
        cout << "cycle is present in directed graph";
    }
    else
    {
        cout << "no cycle is present in dag";
    }
}
