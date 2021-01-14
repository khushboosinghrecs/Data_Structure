#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin>>n;
  int a[n];
  vector<int> v_even, v_odd;
  for(int i=0; i<n; i++)
  {
    cin>>a[i];
  }
  for(int i=0; i<n; i++)
  {
    if(a[i]%2==0)
    {
      v_even.push_back(a[i]);
    }
    if(a[i]%2!=0)
    {
      v_odd.push_back(a[i]);
    }
  }
    for(auto i=0; i<v_even.size(); i++)
    {
      cout<<v_even[i]<<" ";
    }
    cout<<'\n';
    for(auto i=0; i<v_odd.size(); i++)
    {
      cout<<v_odd[i]<<" ";
    }
  
  return 0;
}
