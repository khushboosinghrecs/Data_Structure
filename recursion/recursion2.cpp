#include<iostream>
using namespace std;
void fun(int a)
{
if(a>0)
{
fun(a-1);
cout<<a<<'\n';
}
}
int main()
{
int x=5;
fun(x);
return 0;
}

