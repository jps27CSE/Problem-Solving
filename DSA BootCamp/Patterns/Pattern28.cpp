//     *
//    * *
//   * * *
//  * * * *
// * * * * *
//  * * * *
//   * * *
//    * *
//     *


#include<iostream>
using namespace std;

int pattern28(int n)
{
    for(int row=0;row< 2*n;row++)
    {
       
        int totalColumn = row > n ? 2*n - row : row;
        int numberOfSpaces = n - totalColumn ;

        for(int s=0;s < numberOfSpaces;s++){
            cout<<" ";
        }

        for( int column = 0;column< totalColumn;column++)
        {
            cout<<"* ";
        }

        cout<<endl;
    }
}

int main()
{
    pattern28(5);
}