#include <bits/stdc++.h>
using namespace std;
void dfs(vector<int> vrr[], int n, int s);
void add_edge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}
int dfsrec(vector<int> vrr[], int s, bool visited[])
{
    visited[s] = true;
    //cout << s << " ";
    int child = 0;
    int min_mum = 0;
    int h = 0;
    for (int u : vrr[s])
    {
        if (visited[u] == false)
        {
            // dfsrec(vrr, u, visited);

            h = max(dfsrec(vrr, u, visited) + 1, h);
            child++;
        }
    }
    if (child == 0)
    {
        return 0;
    }
    else
    {
        // cout << s << "  s" << h << '\n';
        return h;
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
    bool visited[n];
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        visited[i] = false;
    }
    int ans = dfsrec(vr, 0, visited);
    cout << ans;
    return 0;
}