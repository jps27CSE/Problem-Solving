#include<iostream>
using namespace std;

int main()
{
    int year;
    cin>>year;

    for(;;)
    {
        year++;

        int a=year/1000;
        int b=(year/100)%10;
        int c=(year/10)%10;
        int d=year%10;

        if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d )
        {
            break;
        }
    }

    cout<<year;
}