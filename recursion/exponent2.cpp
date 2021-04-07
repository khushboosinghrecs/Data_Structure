#include<iostream>
using namespace std;
int exp(int m, int n)
{
if(n==0)
{
return 1;
}
else if(n%2==0)

{
return exp(m*m, n/2);
}
else {
return m*exp(m*m, (n-1)/2);
}
}
int main()
{
cout<<exp(2, 9);
return 0;
}
