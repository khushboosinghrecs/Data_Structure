#include<iostream>
using namespace std;
void bubblesort(int a[], int n)
{
    int flag;
    for(int i= 0; i<n-1; i++)
    {
        flag=0;
        for(int j=0; j<n-1; j++)
        {
            if(a[j]>a[j+1])
            {
                swap(a[j], a[j+1]);
                flag=1;
            }
        }
        if(flag==0)
        {
            break;
        }
    }
}
int main()
{
    int a[]={12,4,5, 6,7, 5, 8, 9};
    int n=sizeof(a)/sizeof(a[0]);
    bubblesort(a, n);
    cout<<"after bubble sorting";
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
