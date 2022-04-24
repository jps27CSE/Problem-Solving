#include<iostream>
using namespace std;

void operation(int array[],int length)
{
  int k =0;

  int i,j;

  for(i=0;i<length;i++)
  {
      if(array[i] !=0)
      {
          array[k++]=array[i];

      }
  }

   for(i=k;i<length;i++)
   {
       array[i]=0;
   }

   for(i=0;i<length;i++)
   {
       cout<<array[i]<<" "<<endl;
   }

}

int main()
{

    int array[]={2,3,0,5,0,8,7,1,0,10};

    int length = sizeof(array)/sizeof(array[0]);

    operation(array,length);

}