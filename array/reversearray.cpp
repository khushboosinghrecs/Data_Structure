#include<iostream>
using namespace std;
struct array{
int a[10];
int size; 
int length;
};
void display(struct array arr)
{
int i;
for(int i=0; i<arr.length; i++)
{
cout<< arr.a[i] <<",";
}
}
void swap(int *x, int *y)
{
int temp;
temp=*x;
*x=*y;

*y=temp;
}


void reverse_array(struct array *arr)
{
int *b, i, j;
b=new int[arr->length];
for(i=arr->length-1, j=0; i>=0; i--, j++)
{
b[j]=arr->a[i];
}
for(i=0; i<arr->length; i++)
{
arr->a[i]=b[i];
}
}
void revers2(struct array *arr)
{
int i, j;
for(i=0, j=arr->length-1; i<j; i++, j--)
{
swap(&arr->a[i], &arr->a[j]);
}
}
int main()
{
struct array arr1={{2,3,9,16,18,21,28,32,35},10,9};
cout<< "before sorte:";
display(arr1);
reverse_array(&arr1);
display(arr1);
return 0;
}

