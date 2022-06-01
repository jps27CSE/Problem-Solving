#include<iostream>
using namespace std;

int main()
{
    int test;
    cin>>test;

    int count = 0;
    int a,b,result;

    for(int i=0; i<test; i++)
    {
        cin>>a>>b;
        result = b-a;

        if(result >= 2)
        {
            count++;
        }

    }

    cout<<count;
}