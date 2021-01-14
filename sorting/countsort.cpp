#include<iostream>
using namespace std;
int findmax(int a[], int n)
{
    int max=INT32_MIN;
    int i;
    for(int i=0; i<n; i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
     
    }
       return max;
}

void countsort(int a[], int n)
{
    int i, j, maxof, *c;
    maxof=findmax(a, n);
    c=new int[(maxof + 1)];
    for( i=0;i<(maxof + 1); i++)
    {
        c[i]=0;
    }
    for( i=0; i<n; i++)
    {
        c[a[i]]++;
    }
    i=0, j=0;
    while(j<(maxof + 1))
    {
        if(c[j]>0)
        {
            a[i++]=j;
            c[j]--;
        }
        else
        {
            j++;
        }
    }
}
 int main()
 {
     int k;
     int a[]={1, 3, 4, 56, 7,87, 89, 96, 34, 23};
     int n=sizeof(a)/sizeof(a[0]);
    cout<<"after countsort array will be";
    countsort(a, n);
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<"  ";
    }
     return 0;
 }
