#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;

    int sum=0;

    for(int i=1;;i++)
    {
        sum = sum + a;
        if((sum%10==0) || (sum%10==b))
        {
            cout<<i;
            break;
        }
        else
        {
            continue; 
        }
    }

    return 0;
}