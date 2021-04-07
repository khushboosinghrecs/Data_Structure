#include<iostream>
using namespace std;
int main()
{
    int n, s=0;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
       cin>> a[i];
       s=s+a[i]; 
    }
    double mean =(double)s/n;
    for(int i=0 ; i<n; i++)
    {
        double temp =s-a[i];
        cout<<temp<<"           11111111"<<'\n';
        double temp2=temp/n-1;
        cout<<temp2<<"           222222222"<<"  n-1"<<n-1<<'\n';
        if(mean==temp2)
        {
            cout<< i+1;
            break;
        }
        else
        {
            cout<<"impossible";
        }
        
    }
    return 0;
}