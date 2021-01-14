#include<iostream>
using namespace std;
struct array
{
int a[10];
int size;
int length;
};
void display(struct array arr)
{
int i;
for(i=0; i<arr.length; i++)
{
cout<<arr.a[i]<<" ";
}
}
void swap(int *a, int *b)
{
int temp=*a;
*a=*b;
*b=temp;
}
void get(struct array arr, int index)
{
int i;
if(index<=arr.length)
{
cout<<arr.a[index]<<" ";
}
}
void set(struct array *arr, int index, int x)
{
x=0;
if(index<=arr->length)
{
arr->a[index]=x;
}
}
int max_(struct array arr)
{
int max=arr.a[0], i;
for(i=1; i<arr.length; i++)
{
if(arr.a[i]>max)
{
max=arr.a[i];
}
}
return max;
}


int min_(struct array arr)
{
int i;
int min=arr.a[0];
for( i=1; i<arr.length; i++)
{
if(arr.a[i]<min)
{
min=arr.a[i];
}
}
return min;
}


int main()
{
struct array arr1={{2,3,9,16,18,21,28,32},10,8};
get(arr1, 4);
cout<<"min "<<min_(arr1)<<'\n';
cout<<"max "<<max_(arr1)<<'\n';
set(arr1, 3, 56);
display(arr1);
return 0;
}





