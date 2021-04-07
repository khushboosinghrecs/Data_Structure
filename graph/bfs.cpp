#include <bits/stdc++.h>
using namespace std;
void add_edge(vector<int> vrr[], int u, int v)
{
    vrr[u].push_back(v);
    vrr[v].push_back(u);
}
void bfs(vector<int> adj[], int v, int s)
{
    bool visited[v];
    for (int i = 0; i < v; i++)
    {
        visited[i] = false;
    }
    queue<int> q;
    visited[s] = true;
    q.push(s);
    while (q.empty() == false)
    {
        int top = q.front();
        q.pop();
        cout << top << " ";
        for (int i : adj[top])
        {
            if (visited[i] == false)
            {
                visited[i] = true;
                q.push(i);
            }
        }
    }
}

int main()
{

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n,e;
    cin >> n>> e; // n= edge
    vector<int> vr[n];
    for (int i = 0; i < e; i++)
    {
        int u, v;
        cin >> u >> v;
        add_edge(vr, u, v);
    }
    int source;
    cin >> source;
   // printedge(vr, n);
    bfs(vr, n, source);
    return 0;
}
