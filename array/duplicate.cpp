#include<iostream>
using namespace std;
int main()
{
int a[]={1,2, 3, 4,5,5,5,6,7,7,7,7,8},i, k=sizeof(a)/sizeof(a[0])-1, cnt=0, last_duplicate=0;

for( i=0; i< k; i++)
{
if(a[i]==a[i+1] && a[i]!=last_duplicate)
{
cnt++;
cout<<a[i]<<" ";
last_duplicate=a[i];
}
}
//cound the number of duplicates sorted array
int j;
for(i=0; i<k; i++)
{
if(a[i]==a[i+1])
{
j=i+1;
while(a[j]==a[i]) j++;
{
cout<< "a[i] "<<a[i]<<"j-i"<< j-i;
i=j-1;
}}}
// count the number of duplicates in unsorted array

int b[]={2,7,8,5,3,22,44,5,66,7,8,8,23,556,777,7,8,88,7,7,77,55,4,33,55};
int n=sizeof(b)/sizeof(b[0]);
int cont=1, l;
for(i=0; i<n-1; i++)
{
if(b[i]!=-1)
{
for( l=i+1; i<n-1; l++)
{
cont++;
b[l]=-1;
}
if(cont>1)
{
cout<<b[i] <<"    "<<cont;
}
}
}
return 0;
}

