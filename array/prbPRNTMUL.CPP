#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
      cin>>a[i];
    }
    int product;
    product=1;
    for(int i=0; i<n; i++)
    {
      product =product *a[i];
    }
    cout<<product<<'\n';
  }
  
  return 0;
}
