#include <bits/stdc++.h>
using namespace std;
int check(int a[], int n)
{
  for(int i=0; i<n; i++)
  {
  if( a[i]==1)
  {
  return i;
  }
  }
  return -1;
}
int main()
{
  //write your code here
    //write your code here
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
    cout<<check(a, n)<<'\n';
    
  }
  return 0;
}
