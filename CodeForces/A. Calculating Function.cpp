#include<iostream>
using namespace std;

int main()
{

    long long int test, sum=0;
    cin>>test;


    if(test%2==0)
    {
        sum=test/2;
    }
    else  
    {
        sum = -(test/2+1); 
    }

    cout<<sum;

    return 0;
}