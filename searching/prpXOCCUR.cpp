#include <bits/stdc++.h>
using namespace std;

int main()
{
  //write your code here
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    char c[n];
    int count=0;
    for(int i=0; i<n; i++)
    {
      cin>>c[i];
    }
    for(int i=0; i<n; i++)
    {
      if(c[i]=='x')
      {
        count++;
      }
    }
    cout<<count<<'\n';
  }
  return 0;
}
