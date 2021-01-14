#include <bits/stdc++.h>
using namespace std;
int dp[1000001];
bool hassol[1000001];
int fun(int sum)
{
    if (sum < 0)
    {
        return 1e9;
    }
 
    if (sum == 0)
    {
        return 0;
    }
 
    if (hassol[sum])
        return dp[sum];
 
    int res = 1e9;
    string temp = to_string(sum);
    for (int i = 0; i < temp.size(); i++)
    {
        if ((temp[i] - '0') != 0)
        {
            //  cout << " sum  " << sum << "  sub  " << i << "       " << sum - (temp[i] - '0') << '\n';
 
            res = min(res, fun(sum - (temp[i] - '0')) + 1);
        }
    }
    hassol[sum] = true;
    dp[sum] = res;
    return res;
}
int main()
{
    int sum;
    cin >> sum;
    cout << fun(sum);
    return 0;
}
