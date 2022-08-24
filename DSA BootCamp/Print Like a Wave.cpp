#include<iostream>
using namespace std;

int main()
{
    int array[3][3];
    
    for(int row=0; row<3; row++)
    {
        for(int column=0;column<3; column++)
        {
            cin>>array[row][column];
        }
    }
   
   for(int column =0;column<3;column++)
   {
     if(column&1)
     {
        for(int row = 3;row>=0;row--)
        {
            cout<<array[row][column]<<" ";
        }
     }
     else{
        for(int row = 0;row<3;row++)
        {
            cout<<array[row][column]<<" ";
        }
     }
   }

}