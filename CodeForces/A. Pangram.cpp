#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test,count=0;
    cin>>test;
    string s;
    cin>>s; 

    for(int i = 0; i <test;i++)
    {
        s[i]=towlower(s[i]);
    }

    sort(s.begin(), s.end());

    for(int i = 0; i < test; i++)
    {
       if(s[i]!=s[i+1])
       {
           count++;
       }
    }

    if(count==26)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
}