#include <bits/stdc++.h>
using namespace std;
void edge(vector<int> vrr[], int u, int v)
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
int bfsdin(vector<int> vr[], int n)
{
    bool visited[n];
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        visited[i] = false;
    }
    for (int i = 0; i < n; i++)
    {
        if (visited[i] == false)
        {
            bfs(vr, i, visited);
            count++;
        }
    }
    return count;
}
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n;
    cin >> n;
    vector<int> vrr[n];
    for (int i = 0; i < n; i++)
    {
        int u, v;
        cin >> u >> v;
        edge(vrr, u, v);
    }
    cout << bfsdin(vrr, n);
    return 0;
}