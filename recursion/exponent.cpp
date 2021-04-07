#include<iostream>
using namespace std;
int exp(int m, int n)
{
if(n==0)
{
return 1;
}
else
{
return exp(m, n-1)*m;
}
}
int main()
{
int a=2;
int b=5;
cout<< exp(a, b);
return 0;
}
