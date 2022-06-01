#include<iostream>
using namespace std;

int main()
{
    int test;
    cin>>test;
    int array[test];

    int i,j;

    for(i=0;i<test;i++)
    {
        cin>>array[i]; 
    }

    for(j=1;j<=test;j++)
    {
       for(i=0;i<test;i++)
       {
           if(array[i]==j)
           {
               cout<<i+1<<" ";
           }
       }
    }
}