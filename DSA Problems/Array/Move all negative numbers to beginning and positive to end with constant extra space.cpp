#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void AccendingArray(int array[],int size)
{
    int i=0; // iterate through array
    int j=0; // ahead to minus number
    int temp;

    for(i=0; i<size;i++)
    {
        if(array[i] < 0)
        {
            if(i!=j){
            temp=array[i];
            array[i]=array[j];
            array[j]=temp; 
         
            }
               j++;
        }
   
        
    }
}

void DisplayArray(int array[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<array[i]<<" ";
    }
}


int main()
{

    int array[]={-12, 11, -13, -5, 6, -7, 5, -3, -6};

    int size = sizeof(array)/sizeof(array[0]);

    AccendingArray(array,size);

    DisplayArray(array,size);

    return 0;
}