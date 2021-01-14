#include<iostream>
#include<vector>
using namespace std;
vector<int> v(10);
int linearsearch(int k)
{
for(int i=0; i<10; i++)
{
if(v[i]==k)
{
return i;
}
}

return 0;
}


int main()
{
for(int i=0; i<10; i++)
{
cin>>v[i];
}
int k;
cout<<" enter the number to search"<<'\n';
cin>>k;
cout<<linearsearch(k);
return 0;
}
