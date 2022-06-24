#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int array[4];

    for(int i = 0; i < 4; i++)
    {
        cin>>array[i];
    }
    sort(array,array+4);

    int c = array[3] - array[0];
    int b = array[2] - c;
    int a = array[3] - (b+c);

    cout<<a<<" "<<b<<" "<<c;
}
