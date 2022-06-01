#include<iostream>
using namespace std;

int main()
{
    int test;
    cin>>test;
    int array[test];

    int i;
    bool has=false;

    for(i=0;i<test;i++)
    {
        cin>>array[i];
    }

    for(i=0; i<test; i++)
    {
        
        if(array[i] == 1)
        {
            has=true;
        }
       
    }

    if(has)
    {
        cout<<"HARD";
    }
    else
    {
        cout<<"EASY";
    }
}