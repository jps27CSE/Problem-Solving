#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin>>test;
    
    while(test--)
    {
        int n; 
        cin>>n;
        int array[n];

        for(int i=0; i<n; i++)
        {
            cin>>array[i];
        }
        sort(array,array+n);
        bool istrue = true;

        for(int j=n-1;j>0;j--)
        {
            if((array[j]-array[j-1])>1)
            {
               istrue =false;
                break;
            }
        }

        if(istrue)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    
}