//     1
//    212
//   32123
//  4321234
// 543212345
//  4321234
//   32123
//    212
//     1


#include <iostream>
using namespace std;

int pattern17(int n)
{
    for(int row=1;row<=2*n;row++)
    {   
        int c = row > n ? 2*n - row : row;


         for(int space = 0;space < n-c;space++)
         {
            cout<<" ";
         }

        for(int column = c;column >=1; column--)
        {
            cout<<column;
        }
        for(int column = 2;column<=c;column++)
        {
           cout<<column;
        }

        cout<<endl;

        
    }
    
}

int main()
{
    pattern17(5);
}