#include <bits/stdc++.h>
using namespace std;
void dfs(vector<int> vrr[], int n, int s);
void add_edge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}
bool dfsrec(vector<int> vrr[], int s, bool visited[], int parent)
{
    visited[s] = true;
    cout << s << " " << parent << '\n';
    for (int u : vrr[s])
    {
        if (visited[u] == false)
        {
            if (dfsrec(vrr, u, visited, s) == true)
            {
                cout << "if" << '\n';
                return true;
            }
        }
        else if (u != parent)
        {
            cout << "else" << '\n';
            return true;
        }
    }
    cout << s << "gfdfgsfds " << parent << '\n';
    return false;
}
bool dfs(vector<int> vrr[], int n)
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
            if (dfsrec(vrr, i, visited, -1) == true)
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n, m;
    cin >> n >> m;
    vector<int> vr[n];
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        add_edge(vr, u, v);
    }
    if (dfs(vr, n) == true)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
    return 0;
}