#include <bits/stdc++.h>
using namespace std;
void add_edge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
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

    int edge, vrtx;
    cin >> edge >> vrtx;
    vector<int> vr[vrtx];
    for (int i = 0; i < edge; i++)
    {
        int u, v;
        cin >> u >> v;
        add_edge(vr, u, v);
    }
    printedge(vr, vrtx);
    return 0;
}