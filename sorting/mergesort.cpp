#include<iostream>
using namespace std;
void merge(int a[], int b[], int m, int n)
{
     int i=0, j=0, k=0;
     sort(a, a+n);
     sort(b, b+n);
     int c[m+n];
     while(i<m && j<n)
     {
         if(a[i]<b[j])
         {
             c[k++]=a[i++];
         }
         else
         {
             c[k++]=b[j++];
         }
     }
     for(; i<m; i++)
     {
         c[k++]=a[i];
     }
     for(; j<n; j++)
     {
         c[k++]=b[j];
     }
     for(int l=0; l<(m+n); l++)
     {
         cout<<c[l]<<" ";
     }
}
int main()
{
    int a[]={1,3,4,5, 6, 7};
    int b[]={2, 8, 9, 10};
    int m=sizeof(a)/sizeof(a[0]);
    int n=sizeof(b)/sizeof(b[0]);
    merge(a, b, m, n);
    return 0;

}
