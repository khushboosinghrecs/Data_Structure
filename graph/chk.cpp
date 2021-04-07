#include <bits/stdc++.h>
using namespace std;
set<int> st;
void add_edge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}
void bfs(vector<int> adj[], int s, bool visited[])
{
    queue<int> q;
    visited[s] = true;
    int sum = 0;
    cout << sum << "  sum " << '\n';
    if (q.empty() == true)
    {
        sum = 0;
    }
    q.push(s);
    while (q.empty() == false)
    {
        int u = q.front();
        q.pop();
        //cout << u << " ";
        cout << u << " " << adj[u].size() << '\n';
        sum = sum + adj[u].size();
        for (int v : adj[u])
        {
            if (visited[v] == false)
            {
                visited[v] = true;
                q.push(v);
            }
        }
    }
    cout << sum << "oij" << '\n';
    st.insert(sum / 2);
}
void bfsdin(vector<int> vr[], int n)
{
    bool visited[n];
    bool b;
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
    //int t;
    //cin >> t;
    // while (t--)
    //{
    st.clear();
    int n, m;
    cin >> n >> m; // n=edge
    vector<int> vr[n];
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        add_edge(vr, u, v);
    }
    bfsdin(vr, n);
    cout << *st.rbegin() << '\n';
    // }
    return 0;
}
