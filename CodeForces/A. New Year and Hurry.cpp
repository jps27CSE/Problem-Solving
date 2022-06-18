#include<iostream>
using namespace std;

int main()
{
    int n,k;

    cin>>n>>k;

    int array[n+1];

    array[0]=0;

    for(int i=1;i<=n;i++)
    {
        array[i]=i;
        array[i]= array[i]*5;
    }

    int count=0;
    int check =k;

    for(int i=1;i<=n;i++)
    {
        if(check<=240)
        {
            check+=array[i];
            if(check>240)
            {
                break;
            }
            count++;
        }
    }
    cout<<count<<endl;
}