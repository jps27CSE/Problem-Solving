#include <iostream>
#include <algorithm>
using namespace std;

void findPair(int array[],int target,int length)
{
  int i,j;

  for(i=0;i<length-1;i++)
  {
      for(j=i+1;j<length;j++)
      {
          if(array[i] + array[j] == target)
          {
              cout<<"Pair is "<<array[i]<<" "<<array[j]<<endl;
              return;
          }
      }
  }
  cout<<"Pair not found";
  return;
}

int main()
{
   int array []={1,2,3,6,5,7,8};
   int target = 12;

   int length = sizeof(array)/sizeof(array[0]);

   findPair (array,target,length);
}