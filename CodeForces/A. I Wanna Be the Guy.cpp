#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
   int test,x,y,count=0;
   cin>>test>>x;
   int array[200];

   for(int i=0;i<x;i++)
   {
       cin>>array[i];
   }
   
   cin>>y;

   for(int i=x;i<x+y;i++)
   {
       cin>>array[i];
   }
   

   sort(array,array+(x+y));
   
   for(int i=0;i<(x+y);i++)
   {
       if(array[i] != array[i+1])
       {
           count++;
       }
     
   }
  
    if(count==test)
    {
          cout<<"I become the guy."<<endl; 
    }
    else
    {
        cout<<"Oh, my keyboard!"<<endl;
    }
   

}