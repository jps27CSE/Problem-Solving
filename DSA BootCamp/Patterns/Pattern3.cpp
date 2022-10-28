#include <iostream>
using namespace std;

int pattern3(int n)
{
    for(int row=1;row<=n;row++)
    {
        for(int column=n;column >=row;column--)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}

int main()
{
    pattern3(5);
}