#include <iostream>
using namespace std;
#define ll int
//#define min(a, b) a < b ? a : b
void buildtree(ll *arr, ll *tree, ll s, ll e, ll ti)
{
    if (s == e)
    {
        tree[ti] = arr[s];
        return;
    }
    ll mid = (s + e) / 2;
    buildtree(arr, tree, s, mid, (2 * ti) + 1);
    buildtree(arr, tree, mid + 1, e, (2 * ti) + 2);
    tree[ti] = min(tree[(2 * ti) + 1], tree[(2 * ti) + 2]);
}
ll getsum(ll *tree, ll s, ll e, ll qs, ll qe, ll ti)
{
    if (qs > e || qe < s)
        return 1e9;
    if (qs <= s && qe >= e)
        return tree[ti];
    ll mid = (s + e) / 2;
    return min(getsum(tree, s, mid, qs, qe, (2 * ti) + 1),
               getsum(tree, mid + 1, e, qs, qe, (2 * ti) + 2));
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin >> n;
 
    ll q;
    cin >> q;
    ll arr[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    ll *tree = new ll[4 * n];
    buildtree(arr, tree, 0, n - 1, 0);
    while (q--)
    {
        ll a, b;
        cin >> a >> b;
        cout << getsum(tree, 0, n - 1, a - 1, b - 1, 0) << '\n';
    }
    return 0;
}
