#include<iostream>
using namespace std;

int majority(int array[],int length)
{
   for(int i =0; length&&i<=length; i++)
   {
      int count = 1;

      for(int j = i+1;j<length;j++)
      {
        if(array[j]==array[i])
        {
            count++;
        }
      }
      if(count>length/2)
      {
          return array[i];
      }
   }
}

int main()
{
   int array [] = {2, 8, 7, 2, 2, 5, 2, 3, 1, 2, 2};
   int length = sizeof(array) / sizeof(array[0]);

   cout<<majority(array,length);
}