#include<iostream>
using namespace std;

int main()
{
    int test;
    cin>>test;
    int array[test];
    int max=0,min=101,maxi,mini; 

    for(int i = 0; i < test; i++)
    {
        cin>>array[i]; 
        if(array[i]>max)
        {
            max=array[i];
            maxi=i;
        }
        if(array[i]<=min)
        {
            min=array[i];
            mini=i;
        }
    }

    if(maxi>mini)
    {
        mini++;
    }

    cout<<maxi+(test-1)-mini;




    return 0;
}