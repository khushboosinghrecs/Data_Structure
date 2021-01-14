#include <bits/stdc++.h>
using namespace std;
void buildtree(long long int *arr, long long int *tree, int s, int e, int ti)
{
    if (s == e)
    {
        tree[ti] = arr[s];
        return;
    }
    int mid = (s + e) / 2;
    buildtree(arr, tree, s, mid, 2 * ti + 1);
    buildtree(arr, tree, mid + 1, e, 2 * ti + 2);
    tree[ti] = tree[(2 * ti) + 1] + tree[(2 * ti) + 2];
}
long long int getsum(long long int *tree, int s, int e, int qs, int qe, int ti)
{
    if (qs > e || qe < s)
        return 0;
    if (qs <= s && qe >= e)
        return tree[ti];
    else
    {
        int mid = (s + e) / 2;
        return (getsum(tree, s, mid, qs, qe, (2 * ti) + 1) +
                getsum(tree, mid + 1, e, qs, qe, (2 * ti) + 2));
    }
}
int updateindex(long long int *tree, int s, int e, int ti, int pos, int value)
{
    int diff;
    if (s == e && s == pos)
    {
        diff = value - tree[ti];
 
        tree[ti] = value;
        return diff;
    }
    int mid = (s + e) / 2;
    if (pos <= mid)
    {
        diff = updateindex(tree, s, mid, (2 * ti) + 1, pos, value);
    }
    else
    {
        diff = updateindex(tree, mid + 1, e, (2 * ti) + 2, pos, value);
    }
    tree[ti] = tree[ti] + diff;
    return diff;
}
void update_index(long long int *tree, int s, int e, int ti, int qs, int qe, int diff)
{
    if (qs > qe || qe < s || s > e)
        return;
    if (s == e)
    {
        tree[ti] += diff;
    }
    else
    {
        int mid = (s + e) / 2;
        getsum(tree, s, mid, qs, qe, (ti * 2) + 1);
        getsum(tree, mid + 1, e, qs, qe, (2 * ti) + 2);
    }
    tree[ti] = tree[(ti * 2) + 1] + tree[(2 * ti) + 2];
}
int main()
{
    int n;
    cin >> n;
 
    int q;
    cin >> q;
    long long int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    long long int *tree = new long long int[4 * n];
    buildtree(arr, tree, 0, n - 1, 0);
    while (q--)
    {
        int a, b;
        cin >> a >> b;
        cout << getsum(tree, 0, n - 1, a - 1, b - 1, 0) << '\n';
    }
    return 0;
}
