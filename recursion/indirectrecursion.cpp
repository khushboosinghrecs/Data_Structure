#include<iostream>
using namespace std;
void funb(int m);
void fun(int n)
{
if(n>0)
{
cout<<n;
funb(n-1);
}
}
void funb(int m)
{
if(m>1)
{
cout<<m;
fun(m/2);
}
}
int main()
{
int k=6;
fun(k);
return 0;
}

