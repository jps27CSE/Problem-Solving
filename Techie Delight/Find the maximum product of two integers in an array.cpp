#include<iostream>
#include<limits.h>
using namespace std;

void maximum_product(int array[],int length)
{
    int max_product = INT_MIN;
    int max_i, max_j;

    int i,j;

    if(length < 2)
    {
        return;
    }

    for(i=0;i<length-1;i++)
    {
        for(j=i+1;j<length;j++)
        {
            if(max_product < array[i] * array[j])
            {
                max_product = array[i] * array[j];
                max_i = i;
                max_j = j;
            }
        }
    }

   cout<<"Pair is :"<<array[max_i]<<" "<<array[max_j];
   

}

int main()
{
    int array [] = {-10, -3, 5, 6, -2};
    int length = sizeof(array)/sizeof(array[0]);

    maximum_product(array, length);

}