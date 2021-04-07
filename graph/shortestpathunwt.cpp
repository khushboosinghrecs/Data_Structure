#include <bits/stdc++.h>
using namespace std;
void edge(vector<int> vrr[], int u, int v)
{
    vrr[u].push_back(v);
    vrr[v].push_back(u);
}
void print_dist(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << '\n';
}
void find_shortest_path(vector<int> vrr[], int n, int s)
{
    int dist[n];
    bool visited[n];
    for (int i = 0; i < n; i++)
    {
        dist[i] = 0;
        //visited[i] = false;
    }
    dist[s] = 0;
    queue<int> q;
    for (int i = 0; i < n; i++)
    {
        // dist[i]=-1;
        visited[i] = false;
    }
    q.push(s);
    visited[s] = true;
    while (q.empty() == false)
    {
        int u;
        u = q.front();
        q.pop();
        for (int v : vrr[u])
        {
            if (visited[v] == false)
            {
                dist[v] = dist[v] + 1;
                visited[v] = true;
                q.push(v);
            }
        }
    }
    print_dist(dist, n);
}

int main()
{

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n, e;
    cin >> n >> e;
    vector<int> vrr[n];
    for (int i = 0; i < e; i++)
    {
        int u, v;
        cin >> u >> v;
        edge(vrr, u, v);
    }
    int source;
    cin >> source;
    find_shortest_path(vrr, n, source);
    return 0;
}