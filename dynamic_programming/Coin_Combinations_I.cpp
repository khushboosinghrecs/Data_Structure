#include <iostream>
#include <climits>
#include <cmath>
#include <string>
#include <vector>
#include <list>
#include <utility>
#include <algorithm>
#include <stack>
#include <queue>
#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>
#include <sstream>
#include <unistd.h>
using namespace std;
#define max(a, b) (a > b ? a : b)
#define min(a, b) (a < b ? a : b)
#define isint(a) ((int)a == a)
#define mod 1000000007
#define INF 1e9
typedef long long int ll;
typedef pair<int, int> pi;
// memoize
int ans[1000001];
bool hasresult[1000001];
int count(int n, int arr[], int x)
{
    if (x == 0)
        return 1;
    if (hasresult[x] == true)
        return ans[x];
    ll total = 0;
    for (int i = 0; i < n; i++)
    {
        if (x - arr[i] >= 0)
        {
            total = total + count(n, arr, x - arr[i]);
            total = total % mod;
        }
    }
    hasresult[x] = true;
    ans[x] = total;
    return total;
}
int main()
{
    int n, x;
    cin >> n >> x;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
 
    cout << count(n, arr, x) << endl;
    return 0;
}
