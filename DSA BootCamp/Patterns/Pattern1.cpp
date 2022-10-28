// ****
// ****
// ****
// ****


#include<iostream>
using namespace std;

int pattern1(int n)
{
    for(int row=1;row<=n;row++)
    {
        for(int column=1;column<=n;column++)
        {
            cout<<"*";
        }

        cout<<endl;
    }
}

int main()
{
    pattern1(4);
}