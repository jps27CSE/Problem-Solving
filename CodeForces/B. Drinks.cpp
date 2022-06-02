#include<iostream>
using namespace std;

int main()
{

    int test;
    cin>>test;
    float sum=0;

    float array[test];
   

    for(int i = 0; i < test; i++)
    {
        cin>>array[i];
    }
    
    for(int i =0;i<test;i++)
    {
        sum +=array[i];
    }

    float result = sum/test;

    cout<<result;

    return 0;
}