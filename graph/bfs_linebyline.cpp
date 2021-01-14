#include <bits/stdc++.h>
using namespace std;
void addedge(vector<int> vr[], int u, int v)
{
    vr[u].push_back(v);
    vr[v].push_back(u);
}
void bfs(vector<int> vr[], int s, int v)
{
    bool btf[v + 1];
    memset(btf, 0, v + 1);
    queue<int> q;
    q.push(s);
    btf[s] = true;
    while (q.empty() == false)
    {
        int couunt = q.size();
        while (couunt > 0)
        {
            int u = q.front();
            cout << u << " ";
            q.pop();
            for (int x : vr[u])
            {
                if (btf[x] == false)
                {
                    btf[x] = true;
                    q.push(x);
                }
            }
            couunt--;
        }
        cout << '\n';
    }
}
int main()
{
    int v, e;
    cin >> v >> e;
    vector<int> vr[v];
    for (int i = 0; i < e; i++)
    {
        int u, v;
        cin >> u >> v;2
        addedge(vr, u, v);
    }
    bfs(vr, 0, v);

    return 0;
}
