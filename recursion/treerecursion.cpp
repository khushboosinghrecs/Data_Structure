#include<iostream>
using namespace std;
void fun(int n)
{
if(n>0)
{
cout<<n;
fun(n-1);
fun(n-1);
}
}
int main()
{
int c=5;
fun(c);
return 0;
}



