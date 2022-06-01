#include<iostream>
using namespace std;

int main()
{
  
   int number;
   cin>>number;

   int a,b,i,k=0;
   int sum=0;

   for(i=1;i<=number;i++)
   {
      cin>>a>>b;
      sum= (a+k)-b;
      if(sum<0)
      {
        k=0;
      }
      else{

      k=sum;

      }
   }
   cout<<sum;

}