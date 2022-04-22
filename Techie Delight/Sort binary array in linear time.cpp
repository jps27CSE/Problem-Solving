#include<iostream>
using namespace std;

void Sorting(int array[],int length)
{
  int zero = 0;

  for(int i = 0; i < length; i++)
  {
      if(array[i] == 0)
      {
          zero++;
      }
  }
  int k = 0;
  while(zero--)
  {
      array[k++]=0;
  }
  while(k < length)
  {
      array[k++] = 1;
  }

  for(int i = 0; i < length; i++)
  {
      cout<<array[i]<<endl;
  }

}

int main()
{
  int array[] = {0,1,0,0,1,1};

  int length = sizeof(array)/sizeof(array[0]);

  Sorting(array,length);
}