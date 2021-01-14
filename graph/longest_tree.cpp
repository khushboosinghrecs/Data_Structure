#include <bits/stdc++.h>
using namespace std;
int maxe;
void add_edge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}
int dfsrec(vector<int> vrr[], int s, bool visited[])
{
    visited[s] = true;
    int child = 0;
    int x,y;
    x = y = 0;
    for (int u : vrr[s])
    {
        if (visited[u] == false)
        {
            int temp = dfsrec(vrr, u, visited) + 1;
            child++;
            if(temp >= x && temp > y){
              y = x;
              x = temp;
            }else if(temp >= y){
              y = temp;
            }
        }
    }
    
    
    if (child == 0)
    {
        return 0;
    }
    else
    {
        maxe = max(maxe,x+y);
        return x;
    }
}

int main()
{
   // freopen("input.txt", "r", stdin);
  //  freopen("output.txt", "w", stdout);
  int t; cin>>t; while(t--)
  {
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
    for (int i = 0; i < n; i++)
    {
        visited[i] = false;
    }
    maxe = 0;
    int k= dfsrec(vr, 0, visited);
    cout << maxe << '\n';
    }
    return 0;
}
