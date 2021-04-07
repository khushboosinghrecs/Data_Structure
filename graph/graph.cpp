#include <iostream>
#include <vector>
using namespace std;
void addedge(vector<int> edg[], int u, int v)
{
    edg[u].push_back(v);
    edg[v].push_back(u);
}
void print(vector<int> edg[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "vertex are" << i << '\n';
        for (int x : edg[i])
        {
            cout << x << "->";
        }
        cout << '\n';
    }
}
int main()
{
    int n = 5;
    vector<int> v[n];
    addedge(v, 0, 1);
    addedge(v, 0, 2);
    addedge(v, 1, 3);
    addedge(v, 1, 4);
    addedge(v, 1, 2);
    print(v, n);
    return 0;
}