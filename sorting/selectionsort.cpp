#include<iostream>
using namespace std;
void selectionsort(int a[], int n)
{
    int i, j, k;
    for( i=0; i<n-1; i++)
    {
        for(j=k=i; j<n; j++)
        {
            if(a[j]<a[k])
            {
                k=j;
            }
        }
        swap(a[i], a[k]);
    }
}
int main(){
    int a[]={1,3,4,0,6,4,2,445,6,7};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<"after sorting"<<'\n';
    selectionsort(a, n);
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<"  ";
    }
}
