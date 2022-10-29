// *
// * *
// * * *
// * * * *
// * * * * *
// * * * *
// * * *
// * *
// *



#include<iostream>
using namespace std;

int pattern5(int n)
{
    for(int row = 0;row< 2*n;row++)
    {
        int totalColumn = row > n ? 2 * n - row : row;

        for(int column=0;column< totalColumn;column++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}

int main()
{
    pattern5(5);
}