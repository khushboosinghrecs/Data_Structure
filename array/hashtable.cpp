#include<iostream>
using namespace std;
int main()
{
int a[]={3, 7, 4, 9, 12, 6, 1, 11, 2 ,10};
int n=sizeof(a)/sizeof(a[0]);
int i;
int h[10]={0};
for(i=0;i<10; i++)
{
h[a[i]]++;
}
for( i=1; i<=12; i++)
{
if(h[i]==0)
{
cout<<"i= "<< i<<'\n';
}
}
return 0;
}
