#include<iostream>
using namespace std;
int linearsearch(int a[] , int n, int x)
{
for(int i=0; i <n; i++)
{
if(a[i]==x)
{
return i;
}
} 
return -1;
}
int main()
{
int a[]={1,2,3,4,5, 6,7};
int n=sizeof(a)/sizeof(a[0]);
lineearsearch(a, n, 6);
return 0;
}
