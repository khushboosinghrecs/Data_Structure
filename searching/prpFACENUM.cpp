#include <bits/stdc++.h>
using namespace std;
int check(int arr[], int n) 
{ 
    int count = 1; 
    int curr_max = arr[0]; 
    for (int i=1; i<n; i++) 
    { 
        if (arr[i] > curr_max) 
        { 
            count++; 
            curr_max=arr[i]; 
        } 
    } 
  
    return count; 
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
