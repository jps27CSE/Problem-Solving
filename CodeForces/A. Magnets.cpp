#include<iostream>
using namespace std;

int main()
{
    int test;
    cin>>test;
    int array[test];
    int count=0;
    int i;

    for(i=0;i<test;i++)
    {
        cin>>array[i];

    }

    for(i=0;i<test;i++)
    {
        if(array[i-1] !=array[i])
        {
          count++;
        }
    }

    cout<<count;

}