#include<iostream>
using namespace std;

int main()
{
    int count = 0,k,l,m,n,d;
    cin>>k;
    cin>>l;
    cin>>m;
    cin>>n;
    cin>>d;

    for(int i=1;i<=d;i++)
    {
        if(i%k==0 || i%l==0 || i%m==0 || i%n==0)
        {
            count++;
        }
    }

    cout<<count;

    return 0;
}