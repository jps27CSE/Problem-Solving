#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int array[10];
    int count=0;

    for(int i = 0; i < 4; i++)
    {
        cin>>array[i];
    }

    sort(array,array+4);

    for(int i = 0; i < 4; i++)
    {
        if(array[i] == array[i + 1])
        {
          count++;
        }
    }

    cout<<count;

}