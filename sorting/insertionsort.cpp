#include<iostream>
using namespace std;
void insertionsort(int a[], int n)
{
    int i,j, x;
    for( i=1; i< n; i++)
    {
        
        j=i-1;
        x=a[i];
       // cout<<"first i"<< i<<"first j= "<<j<<'\n';
       // cout<<" x="<<x<<'\n';
        while(j>-1 && a[j]>x)
        {
            a[j+1]=a[j];
            j--;
            cout<<"j="<<j <<"i= "<<i<<"  "<<'\n';
            cout<<"x= "<<x;
        }
        a[j+1]=x;
       // cout<<" a[j+1] "<<a[j+1];
    }
}
int main()
{
    int a[]={6,68,8,9,990,0,9};
    int n=sizeof(a)/sizeof(a[0]);
    insertionsort(a, n);
    cout<<"after insertion sort";
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;

}
