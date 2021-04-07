#include<iostream>
using namespace std;
int fact(int num)
{
int i, s=1;
for(i=1; i<=num; i++)
{
s=s*i;
}
return s;
}
int c(int n, int r)
{
int t1, t2 , t3;
t1=fact(n);
t2=fact(r);
t3=fact(n-r);
return t1/(t2* t3);
}
int main()
{
cout<<c(5, 2);
return 0;
}

