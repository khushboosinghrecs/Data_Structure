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
cout<< arr.a[i]<<",";
}
}
int _delete(struct array *arr, int index)
{
int x=0;
int i;
if(index>=0 && index<arr->length)
{
int x=0, i;
for(i=index; i<arr->length; i++)
{
x=arr->a[index];
arr->a[i]=arr->a[i+1];
arr->length--;
return x;
}
}
return 0;
}
int main()
{
struct array arru={ {1,2,3,4,5,5,9}, 10, 7};
cout<<_delete(&arru, 4);
display(arru);
return 0;
}
