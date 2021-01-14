#include<iostream>
using namespace std;
int binarysearch(int a[], int l, int h, int key)
{
    int mid;
    if(l==h)
    {
        if(a[l]==key)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    else
    {
        mid=(l+h)/2;
        if(key==a[mid])
        {
            return mid;
        }
        if(key<a[mid])
        {
            return binarysearch(a, l, mid-1, key);
        }
        else
        {
            return binarysearch(a, mid+1, h, key);
        }
    }
}
int main()
{
    int a[]={1, 3, 4, 5 ,6,7,9, 22};
    int n=sizeof(a)/ sizeof(a[0]);
    int k=binarysearch(a, 0, n, 5);
    return 0;
}
