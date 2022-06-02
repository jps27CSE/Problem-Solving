#include<iostream>
using namespace std;

int main()
{
    int test;
    cin>>test;

    for(int i=1;i<test;i++)
    {
        if(i%2!=0)
        {
            cout<<"I hate that ";
        }
        else if (i%2==0)
        {
            cout<<"I love that ";
        }
    }
    if(test%2!=0)
    {
        cout<<"I hate it";
    }
    else if(test%2==0)
    {
        cout<<"I love it";
    }
}