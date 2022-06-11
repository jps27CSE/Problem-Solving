#include<iostream>
using namespace std;

int main()
{
    int test;
    cin>>test;

    int array[test],count=0;
   

    for(int i=0;i<test;i++)
    {
        cin>>array[i];
    }

    int max= array[0];
    int min= array[0];
    
    for(int i=1;i<test;i++)
    {
       if(array[i] > max)
       {
         max = array[i];
         count++;
       }
       if(array[i] < min)
       {
        min = array[i];
        count++;
       }
    }

    cout<<count;
}