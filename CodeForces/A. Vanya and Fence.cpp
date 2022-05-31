#include<iostream>
using namespace std;

int main()
{
    int test,height;
    cin>>test;
    cin>>height;
    int i;
    int low=0,high=0;

    int array[test]; 

    for(i=0;i<test;i++)
    {
        cin>>array[i];
       
    }
    for(i=0;i<test;i++)
    {
         if(array[i]<= height)
        {
            low++;
        }
        else if(array[i]>height)
        {
            high = high + 2;
        }
    }

    int result = low+high;
    cout<<result<<endl;

    return 0;

}