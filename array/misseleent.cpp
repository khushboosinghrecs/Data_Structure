#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
int a[]= {4, 6, 7, 8, 10};
int i, k, n;
n=sizeof(a)/sizeof(a[0]);
k=a[0]-0;
for(i=1; i<n; i++)
{
if(a[i]-i!=k)
{
while(k<a[i]-i)
{
cout<<"sorted"<<i+k;
k++;
}
}
}
//unsorted
int b[]={ 2, 5, 7,4,9,12,6,1, 11,2, 9};
int c=sizeof(b)/sizeof(b[0]);
int l=1;
int u=12;
int h[c];

for(i=0; i<c; i++)
{
h[b[i]]++;
}
for(i=l; i<u; i++)
{
if(h[i]==0)
{
cout<<"unsorted"<<i;
}
}
for(i=0; i<c; i++)
{
cout<<"hye"<<h[i]<<" ";
}

for(i=l; i<u; i++)
{
cout<<"hello"<<" "<<h[i];
}

return 0;
}


