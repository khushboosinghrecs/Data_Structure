#include<iostream>
using namespace std;
int partition(int a[], int l, int h)
{
    int i=l, j=h;
    int pivot=a[l];
    do{
        do{i++;}while(a[i]<=pivot);
        do{j--;}while(a[j]>pivot);
        if(i<j)swap(a[i], a[j]);
    }while(i<j);
    swap(a[l], a[j]);
    return j;
}

void quicksort(int a[], int l, int h)
{
    int j;
    if(l<h)
    {
        
        j=partition(a, l, h);
        quicksort(a, l, j);
        quicksort(a, j+1, h);
    }
}
int main()
{
int a[]={9, 7, 4, 1, 3, 2, 29,23, 2};
int l=0;
int n=sizeof(a)/sizeof(a[0]);
cout<<" after sorting by quick sort"<<'\n';
quicksort(a, l, n);
for(int i=0; i<n; i++)
{
    cout<<a[i]<<" ";
}
}
