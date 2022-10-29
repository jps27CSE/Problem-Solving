//     1
//    212
//   32123
//  4321234
// 543212345


#include <iostream>
using namespace std;

int pattern30(int n)
{
    for(int row=1;row<=n;row++)
    {

         for(int space = 0;space < n-row;space++)
         {
            cout<<" ";
         }

        for(int column = row;column >=1; column--)
        {
            cout<<column;
        }
        for(int column = 2;column<=row;column++)
        {
           cout<<column;
        }

        cout<<endl;

        
    }
    
}

int main()
{
    pattern30(5);
}