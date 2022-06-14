#include<iostream>
using namespace std;

int main() 
{
    int test;
    cin>>test;
    string s;
    int sum=0;

    for(int i=0; i<test; i++)
    {
        cin>>s;
        if(s[0]=='T')
        {
          sum+=4;

        }
        else if(s[0]=='C')
        {
            sum+=6;
        }
        else if(s[0]=='O')
        {
            sum+=8;
        }
        else if(s[0]=='D')
        {
            sum+=12;
        }
        else if(s[0]=='I')
        {
            sum+=20;
        }
    }
    cout<<sum;
}