#include<iostream>
using namespace std;

int main()
{

    int test;
    cin>>test;
    int a[test],b[test];
    int i,j;
    int count=0;

    for(int i=0;i<test;i++)
    {
        cin>>a[i];
        cin>>b[i];
    }

    for(int i=0;i<test;i++)
    {
        for(int j=0;j<test;j++)
        {
            if(a[i]==b[j])
            {
                count++;
            }
        }
    }
    cout<<count;

    return 0;
}