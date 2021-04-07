#include <bits/stdc++.h>
using namespace std;
stack<int> stk;
void add_edge(vector<int> vrr[], int u, int v)
{
    vrr[u].push_back(v);
    vrr[v].push_back(u);
}
void bfs(vector<int> adj[], int s, bool visited[])
{
    queue<int> q;
    visited[s] = true;
    q.push(s);
    while (q.empty() == false)
    {
        int u = q.front();
        q.pop();
        stk.push(u);
        // cout << u << " ";
        for (int v : adj[u])
        {
            if (visited[v] == false)
            {
                visited[v] = true;
                q.push(v);
            }
        }
    }
}
void bfsdin(vector<int> vr[], int n)
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
            bfs(vr, i, visited);
        }
    }
}

int main()
{

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n, e;
    cin >> n >> e; // n= edge
    vector<int> vr[n];
    for (int i = 0; i < e; i++)
    {
        int u, v;
        cin >> u >> v;
        add_edge(vr, u, v);
    }
    // printedge(vr, n);
    bfsdin(vr, n);
    while (stk.empty() == false)
    {
        cout << stk.top() << "  ";
        stk.pop();
    }
    return 0;
}