#include<iostream>
using namespace std;
void insert(int a[], int n)
{
    int temp, i=n;
    temp=a[n];
    while(i> 1 && temp>a[i/2])
    {
        a[i]=a[i/2];
        i=i/2;
    }
    a[i]=temp;
}

void createheap()
{
    int a[]={0, 2, 4, 6, 7, 8};
    int i;
    for(int j=2; i<sizeof(a)/sizeof(a[0]); i++)
    {
        insert(a, i);
    }
}

int deleteh(int a[], int n)

{
    int x, i, j,val;
    val=a[1];
    x=a[n];
    a[1]=a[n];
    
    i=1, j=2*i;
    while(j<n-1)
    {
        if(a[j+1]>a[j])
        {
            j=j+1;
        }
        if(a[i]<a[j])
        {
            swap(a[i], a[j]);
            i=j;
            j=2*i;
        }
        else
        {
            break;
        }
    }
    return val;
}

int main()
{
    int h[]={0, 10, 20, 30, 40, 50};
    int i, k;

    for(int i=0; i<6; i++)
    {
        insert(h, i);
    }
   k= deleteh(h, 6);
    cout<<"deleted element is";
    cout<<k<<'\n';
    for(int i=1; i<5; i++)
    {
        cout<<h[i]<<" ";
    }
    return 0;
}